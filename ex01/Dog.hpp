/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:41:06 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 12:14:37 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain_;
public:
	Dog();
	Dog(const Dog& dog);
	Dog &operator=(const Dog& dog);
	~Dog();

	void	makeSound() const;
};

#endif
