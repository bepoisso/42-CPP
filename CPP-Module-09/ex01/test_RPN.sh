#!/bin/bash

# Couleurs
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Chemin vers ton exécutable
EXEC="./RPN"

# Définition des tests : "commande|attendu|type" (type = out ou err)
tests=(
  "8 9 * 9 - 9 - 9 - 4 - 1 +|42|out"
  "7 7 * 7 -|42|out"
  "1 2 * 2 / 2 * 2 4 - +|0|out"
  "1 2 3 + *|5|out"
  "5 1 2 + 4 * + 3 -|14|out"
  "1 2 + 3 + 4 + 5 +|15|out"
  "9 1 - 2 - 3 - 4 -|-1|out"
  "2 3 + 5 * 6 - 7 +|26|out"
  "2 3 * 4 * 5 * 6 *|720|out"
  "1 2 + +|error: bad logic|err"
  "+|error: bad logic|err"
  "* / - +|error: bad logic|err"
  "1 2 + a|error: bad input|err"
  "1 b +|error: bad input|err"
  "1 + +|error: bad logic|err"
  "1 2 + 3 4 +|error: bad logic input|err"
  "1 2 + 3 + 4|error: bad logic input|err"
  "1 2 3 +|error: bad logic input|err"
  "5 5 5 5 + + +|20|out"
  "1 2 + 3 + 1 -|5|out"
)

pass=0
fail=0

echo "🔧 Running RPN tests..."

for test_case in "${tests[@]}"; do
  input=$(echo "$test_case" | cut -d'|' -f1)
  expected=$(echo "$test_case" | cut -d'|' -f2)
  output_type=$(echo "$test_case" | cut -d'|' -f3)

  if [ "$output_type" = "out" ]; then
    output=$($EXEC "$input" 2>/dev/null)
  else
    output=$($EXEC "$input" 2>&1 >/dev/null)
  fi

  if [ "$output" = "$expected" ]; then
    echo -e "[${GREEN}PASS${NC}] \"$input\" => \"$output\""
    ((pass++))
  else
    echo -e "[${RED}FAIL${NC}] \"$input\" => \"$output\" (expected: \"$expected\")"
    ((fail++))
  fi
done

echo ""
echo -e "✅ Total: ${GREEN}$pass passed${NC}, ${RED}$fail failed${NC}."

exit $fail
