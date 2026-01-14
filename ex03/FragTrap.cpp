/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:40:38 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/13 02:35:08 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
};

void FragTrap::attack(const std::string &target)
{
		if (this->energyPoints == 0)
	{
		std::cout << this->name << " has 0 energie points, attack failed!" << std::endl;
		return;
	}
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " has 0 hit points, attack failed!" << std::endl;
		return;
	}
	this->energyPoints -= 1;
	std::cout << "FragTrap " << this->name << " uses Frag attack on " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
};

void FragTrap::highFivesGuys()
{
	std::cout << this->name << " FragTrap has requested a high five!" << std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap destructor called!" << std::endl;
};