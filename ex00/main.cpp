/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:11:00 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 12:32:50 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	meta = Animal();
	Dog		dog = Dog();
	Cat		cat = Cat();

	std::cout << meta.getType() << " " << std::endl;
	std::cout << dog.getType() << " " << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	meta.makeSound();
	dog.makeSound();
	cat.makeSound();
}

