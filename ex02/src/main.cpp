/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/09 17:31:21 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "classes.hpp"

int main() 
{
    std::srand(std::time(0));

	Base *b = Base::generate();
	Base::identify(b);
	Base::identify(*b);
	
	delete b;
    return 0;
}
