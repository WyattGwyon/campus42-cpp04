/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:15:31 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 18:35:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
        ideas_[i] = brain.ideas_[i];
	std::cout << "Brain Copy Constructor called." << std::endl;
}

Brain	&Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			ideas_[i] = brain.ideas_[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called." << std::endl;
}

const std::string&	Brain::getIdea(const int idx) const
{
	if (idx >= 0 && idx < 100)
		return (ideas_[idx]);
	else
		throw std::out_of_range("Invalid idea range.");
}

void	Brain::setIdea(const int idx, const std::string& idea)
{
	if (idx >= 0 && idx < 100)
		ideas_[idx] = idea;
	else
		throw std::out_of_range("Invalid idea range.");
}
