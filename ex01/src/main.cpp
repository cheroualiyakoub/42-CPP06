/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/03/01 21:22:24 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int main()
{
    // Step 1: Create a Data object dynamically
    Data* original = new Data();
    original->id = 101;
    original->name = "TestObject";
    original->value = 42.42;

    // Print original Data object
    std::cout << "Original Data object:\n";
    std::cout << "ID: " << original->id << ", Name: " << original->name << ", Value: " << original->value << "\n";

    // Step 2: Serialize the pointer
    uintptr_t raw = Serializer::serialize(original);
    std::cout << "\nSerialized uintptr_t: " << raw << "\n";

    // Step 3: Deserialize back to a Data pointer
    Data* deserialized = Serializer::deserialize(raw);

    // Print deserialized Data object
    std::cout << "\nDeserialized Data object:\n";
    std::cout << "ID: " << deserialized->id << ", Name: " << deserialized->name << ", Value: " << deserialized->value << "\n";

    // Step 4: Check if original and deserialized pointers match
    if (original == deserialized) {
        std::cout << "\nOriginal and deserialized pointers match!\n";
    } else {
        std::cout << "\nOriginal and deserialized pointers do not match.\n";
    }
    delete original;
    return 0;
}
