/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:31:08 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 14:13:01 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>

#include "Base.hpp"

Base* generate(void) {
    switch (rand()%3)
    {
    case 0:
        std::cout << "generated: A" << std::endl;
        return new A();
        break;
    case 1:
        std::cout << "generated: B" << std::endl;
        return new B();
        break;
    case 2:
        std::cout << "generated: C" << std::endl;
        return new C();
        break;
    default:
        std::cout << "error: fatal" << std::endl;
        return NULL;
        break;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "out: A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "out: B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "out: C" << std::endl;
    else
        std::cout << "out: Unknown type" << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "out: A" << std::endl;
        return;
    } catch (std::exception&) {}

    try {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "out: B" << std::endl;
        return;
    } catch (std::exception&) {}

    try {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "out: C" << std::endl;
        return;
    } catch (std::exception&) {}

    std::cout << "out: Unknown type" << std::endl;
}

int main(void)
{
    srand(time(NULL));
    std::cout << "----------Generation start----------" << std::endl;
    Base* a = generate();
    Base* b = generate();
    Base* c = generate();
    Base* d = generate();
    Base* e = generate();
    Base* f = generate();
    Base* g = generate();
    Base* h = generate();
    Base* i = generate();
    Base* j = generate();

    std::cout << std::endl << std::endl << "----------Identify * start----------" << std::endl;
    identify(a);
    identify(b);
    identify(c);
    identify(d);
    identify(e);
    identify(f);
    identify(g);
    identify(h);
    identify(i);
    identify(j);
    
    std::cout << std::endl << std::endl << "----------Identify & start----------" << std::endl;
    identify(*a);
    identify(*b);
    identify(*c);
    identify(*d);
    identify(*e);
    identify(*f);
    identify(*g);
    identify(*h);
    identify(*i);
    identify(*j);

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
    delete g;
    delete h;
    delete i;
    delete j;

    return 0;
}