/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:44 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/08 15:41:19 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "classes.hpp"
#include <random>

Base::~Base() {}
Base* Base::generate(void)
{
    std::srand(std::time(0));

    int random_num = std::rand() % 3;
	// std::cout << "num = " << random_num << std::endl;
	if(random_num == 0)
		return (new A());
	else if(random_num == 1)
		return (new B());
	else if(random_num == 2)
		return (new C());
	return nullptr;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer   (" << p << ") is an instance of class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer   (" << p << ") is an instance of class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer   (" << p << ") is an instance of class C" << std::endl;
}

void Base::identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "Reference   (" << &a << ") is an instance of class A" << std::endl;
		return ;
	}
	catch(std::exception &e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "Reference   (" << &b << ") is an instance of class B" << std::endl;
		return ;
	}
	catch(std::exception &e) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "Reference   (" << &c << ") is an instance of class C" << std::endl;
		return ;
	}
	catch(std::exception &e) {throw (std::invalid_argument("No class matches the the Base"));}
}
