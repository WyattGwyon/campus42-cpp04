/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:46:54 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 19:38:50 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat"),
	brain_(new Brain())
{
	std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& cat) :
	Animal(cat.type_),
	brain_(new Brain(*cat.brain_))
{
	std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		type_ = cat.type_;
		Brain* newBrain = new Brain(*cat.brain_);
		delete brain_;
		brain_ = newBrain;
		//brain_ = cat.brain_;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
	delete brain_;
}

void	Cat::makeSound() const
{
	std::cout << "Mrkgnao, Gurrhrr" << std::endl;
}

const std::string&	Cat::getIdea(const int idx) const
{
	return (brain_->getIdea(idx));
}

void	Cat::setIdea(const int idx, const std::string& idea)
{
	 brain_->setIdea(idx, idea);
}
