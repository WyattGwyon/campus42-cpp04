/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:46:54 by clouden           #+#    #+#             */
/*   Updated: 2026/06/01 00:31:37 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat")
{
	std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& cat) :
	Animal(cat.type_)
{
	std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		type_ = cat.type_;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Mrkgnao, Gurrhrr" << std::endl;
}


