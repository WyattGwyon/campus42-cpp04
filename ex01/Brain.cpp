/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:15:31 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 12:09:45 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
	{
		ideas_[i] = brain.ideas_[i];
	}
}

Brain::Brain	&Brain::operation=(const Brain& brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			ideas_[i] = brain.ideas_[i];
	}
	return (*this);
}

const std::string&	getIdea(const int idx) const
{
	return (ideas_[idx]);
}

void	setIdea(const int idx, const std::string& idea)
{
	ideas_[idx] = idea;
}
