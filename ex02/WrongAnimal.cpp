/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:55:05 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 21:29:28 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	type_("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor called.\n";
}

WrongAnimal::WrongAnimal(const std::string type) :
	type_(type)
{
	std::cout << "WrongAnimal Constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong) :
	type_(wrong.type_)
{
	std::cout << "WrongAnimal Copy Constructor called.\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& wrong)
{
	if (this != &wrong)
	{
		type_ = wrong.type_;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Generic animal noises" << std::endl;
}


