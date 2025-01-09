/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/08 15:40:05 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	std::cout << "-----------------------------------------" << std::endl;
	try
	{
		if (argc != 2)
			throw std::invalid_argument("this program takes 1 paramater");
		std::cout << std::fixed << std::setprecision(1);
		ScalarConverter::convert(argv[1]);
	} 
	catch (const std::exception& e){std::cout << e.what() << '\n';}
	std::cout << "-----------------------------------------" << std::endl;
    return 0;
}
