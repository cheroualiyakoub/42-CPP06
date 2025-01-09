/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:46 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/09 15:26:17 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>


// // for testing 
// struct Data2 {
//     int id;
//     std::string name;
//     float value;
// };


struct Data {
    int id;
    std::string name;
    float value;
};

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer &copy);
		virtual ~Serializer(void);
		Serializer& operator=(const Serializer &copy);
		
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		// static Data2* deserialize2(uintptr_t raw);
		// static Data2* deserializeData(Data* data);

};

#endif