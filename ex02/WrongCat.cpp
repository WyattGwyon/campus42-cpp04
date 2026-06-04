/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:46:54 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 22:11:05 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
	WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong) :
	WrongAnimal(wrong.type_)
{
	std::cout << "WrongCat Copy Constructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat& wrong)
{
	if (this != &wrong)
	{
		type_ = wrong.type_;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Mrkgnao, Gurrhrr" << std::endl;
}


