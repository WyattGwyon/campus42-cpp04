/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:00:37 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 16:55:46 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
protected:
	std::string	ideas_[100];

public:
	Brain();
	Brain(const Brain& brain);
	Brain &operator=(const Brain& brain);
	~Brain();

	const std::string&	getIdea(const int idx) const;
	void				setIdea(const int idx, const std::string& idea);
};

#endif
