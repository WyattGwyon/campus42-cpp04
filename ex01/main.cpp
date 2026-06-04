/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:11:00 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 12:09:45 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal*	meta = new Animal();
	Animal*	dog = new Dog();
	Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
}

