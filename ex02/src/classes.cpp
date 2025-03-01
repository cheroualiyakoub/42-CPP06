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
    int random_num = std::rand() % 3;
	// std::cout << "num = " << random_num << std::endl;
	if(random_num == 0)
		return (new A());
	else if(random_num == 1)
		return (new B());
	else
		return (new C());
	return nullptr;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer is an instance of class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer is an instance of class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer is an instance of class C" << std::endl;
}

void Base::identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference is an instance of class A" << std::endl;
		return ;
	}
	catch(std::bad_cast &e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Reference is an instance of class B" << std::endl;
		return ;
	}
	catch(std::bad_cast &e) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Reference is an instance of class C" << std::endl;
		return ;
	}
	catch(std::bad_cast &e) { std::cout << "Unknown type." << std::endl;;}
}
