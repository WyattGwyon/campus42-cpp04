/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 20:43:28 by clouden           #+#    #+#             */
/*   Updated: 2026/06/04 15:17:15 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain* brain_;

public:
	Cat();
	Cat(const std::string type);
	Cat(const Cat& cat);
	Cat &operator=(const Cat& cat);
	~Cat();

	void makeSound() const;
};

#endif
