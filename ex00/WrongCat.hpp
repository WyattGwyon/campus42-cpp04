/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:43:28 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 22:08:51 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const std::string type);
	WrongCat(const WrongCat& wrong);
	WrongCat &operator=(const WrongCat& wrong);
	~WrongCat();

	void makeSound() const;
};

#endif
