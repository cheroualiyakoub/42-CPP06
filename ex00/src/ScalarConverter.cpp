/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:44 by ycheroua          #+#    #+#             */
/*   Updated: 2024/12/17 18:41:42 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter  &copy) {}
ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) 
{
	return *this;
}


void ScalarConverter::toChar(std::string value)
{
	char c;

	c = std::convert
}
void ScalarConverter::toFloat(std::string value)
{
	
}
void ScalarConverter::toInt(std::string value)
{
	
}

void ScalarConverter::convert(std::string value)
{
	try {toChar(value);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}
	
	try {toInt(value);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}
	
	try {toFloat(value);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}
}