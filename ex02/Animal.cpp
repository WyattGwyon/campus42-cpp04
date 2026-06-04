/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:55:05 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 21:29:28 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :
	type_("Animal")
{
	std::cout << "Animal Default Constructor called.\n";
}

Animal::Animal(const std::string type) :
	type_(type)
{
	std::cout << "Animal Constructor called.\n";
}

Animal::Animal(const Animal& animal) :
	type_(animal.type_)
{
	std::cout << "Animal Copy Constructor called.\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called.\n";
}

Animal &Animal::operator=(const Animal& animal)
{
	if (this != &animal)
	{
		type_ = animal.type_;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (type_);
}

void	Animal::makeSound() const
{
	std::cout << "Generic animal noises" << std::endl;
}

