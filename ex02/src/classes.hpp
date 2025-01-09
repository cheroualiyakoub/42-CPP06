/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:46 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/09 17:01:45 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>



class Base
{
	public:
		virtual ~Base(void);
		static Base * generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
};

class A : public Base {};

class B : public Base {};

class C : public Base {};
#endif