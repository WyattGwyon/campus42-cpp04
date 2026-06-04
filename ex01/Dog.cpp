/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 19:34:49 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 15:34:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog"),
	brain_(new Brain())
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) :
	Animal(dog.type_),
	brain_(new Brain())
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		type_ = dog.type_;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Rooff, bruff, bark, browrorrrorrorr" << std::endl;
}
