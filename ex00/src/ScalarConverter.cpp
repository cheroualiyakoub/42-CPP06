/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:44 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/08 15:41:19 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter  &copy) {(void)copy;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) 
{
	(void)copy;
	return *this;
}

void ScalarConverter::toChar(double val)
{
	try
	{
		std::cout << "char: ";
        if (std::isnan(val) || val < 0 || val > 127)
        	throw std::invalid_argument("impossible");
		else if (!std::isprint(static_cast<int>(val))) 
        	throw std::invalid_argument("Non displayable");
		else
    	    std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
    }
	catch (const std::exception& e)
	{
		throw std::invalid_argument(e.what());
	}
}

void ScalarConverter::toFloat(double val)
{
    std::cout << "float: ";
    if (std::isnan(val))
        std::cout << "nanf" << std::endl;
    else if (std::isinf(val))
        std::cout << (val > 0 ? "+inff" : "-inff") << std::endl;
    else {
        std::cout << static_cast<float>(val) << "f" << std::endl;
    }
}

void ScalarConverter::toInt(double val)
{
	try
	{
		std::cout << "int: ";
		if (std::isnan(val) || val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
			throw std::invalid_argument("impossible");
		else
			std::cout << static_cast<int>(val) << std::endl;
    }
	catch (const std::exception& e)
	{
		throw std::invalid_argument(e.what());
	}
}

void ScalarConverter::toDouble(double val)
{
    std::cout << "double: ";
    if (std::isnan(val))
        std::cout << "nan" << std::endl;
    else if (std::isinf(val))
        std::cout << (val > 0 ? "+inf" : "-inf") << std::endl;
    else
        std::cout << val << std::endl;
}

bool isChar(const std::string &value)
{
    return value.length() == 1 && std::isprint(value[0]) && !std::isdigit(value[0]);
}

double ScalarConverter::parseInput(const std::string &value)
{
	if (isChar(value))
        return static_cast<double>(value[0]);
    try
	{
        return std::stod(value);
    } catch (const std::exception& e) 
	{
        throw std::invalid_argument(" impossible");
    }
}

void ScalarConverter::convert(std::string value)
{
	double value_double;

	try 
	{
		value_double = parseInput(value);
	}
	catch (const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
		return ;
	}
	try {toChar(value_double);}
	catch (const std::exception& e){std::cout << e.what() << std::endl;}
	
	try {toInt(value_double);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}
	
	try {toFloat(value_double);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}

	try {toDouble(value_double);}
	catch (const std::exception& e){std::cout << e.what() << '\n';}
}
