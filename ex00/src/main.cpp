/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/07 18:35:19 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
    // Test cases
	(void)argc;
	(void)argv;
    std::string testValues[] = {"0", "nan", "42.0f"};
    int testCount = 3;
	
    for (int i = 0; i < testCount; i++)
	{
        std::cout << "Testing with value: \"" << testValues[i] << "\"" << std::endl;
        try {
            ScalarConverter::convert(testValues[i]);
        } catch (const char* e) {
            std::cout << e << std::endl;
        }
        std::cout << "-----------------------------------------" << std::endl;
    }
    return 0;
}
