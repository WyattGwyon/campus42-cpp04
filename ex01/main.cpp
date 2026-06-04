/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:11:00 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 20:39:46 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "=====Constructor=====" << std::endl;
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();
	Dog dog1;
	Dog	dog2 = dog1;
	Cat	cat1;
	Cat cat2 = cat1;
	std::cout << std::endl;

	std::cout << "=====Types===========" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "=====Sounds==========" << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "=====DeepCopy==========" << std::endl;
	dog1.setIdea(0, "Sniff butt");
	dog2.setIdea(0, "stop and stare, bark");
	std::cout << "dog1 thinks: " << dog1.getIdea(0) << std::endl;
	std::cout << "dog2 thinks: " << dog2.getIdea(0) << std::endl;
	cat1.setIdea(0, "stare into the void");
	cat2.setIdea(0, "waggle butt before jumping");
	std::cout << "cat1 thinks: " << cat1.getIdea(0) << std::endl;
	std::cout << "cat2 thinks: " << cat2.getIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "=====Destructor=====" << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;
}

