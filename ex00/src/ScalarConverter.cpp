/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliziard <sliziard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:51:59 by sliziard          #+#    #+#             */
/*   Updated: 2025/10/24 18:51:59 by sliziard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

// *Constructors
ScalarConverter::ScalarConverter() {
#ifdef PRINT_CALLER
	std::cout << "ScalarConverter default constructor called" << std::endl;
#endif
}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
#ifdef PRINT_CALLER
	std::cout << "ScalarConverter copy constructor called" << std::endl;
#endif
	*this = other;
}
// *Destructor
ScalarConverter::~ScalarConverter() {
#ifdef PRINT_CALLER
	std::cout << "ScalarConverter destructor called" << std::endl;
#endif
}

// *Operators

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
#ifdef PRINT_CALLER
	std::cout << "ScalarConverter assignment operator called" << std::endl;
#endif
	if (this != &other) {
		// Copy attributes here
	}
	return *this;
}



//* Methods

// ...
