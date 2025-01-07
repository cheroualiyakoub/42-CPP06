/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:46 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/07 18:33:17 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>


class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		virtual ~ScalarConverter(void);
		ScalarConverter& operator=(const ScalarConverter &copy);
		
	public:
		static void convert(std::string value);
		static void toChar(double value);
		static void toInt(double value);
		static void toFloat(double value);
		static void toDouble(double value);
		static double parseInput(std::string const &value);
};

#endif