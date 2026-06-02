/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:04:56 by clouden           #+#    #+#             */
/*   Updated: 2026/06/01 00:26:27 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
protected:
	std::string type_;
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal& animal);
	Animal &operator=(const Animal& animal);
	~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif
