/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:40:38 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/13 02:35:15 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
};

void ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << this->name << " uses Scav attack on " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
};

void ScavTrap::guardGate()
{
	std::cout << this->name << " is now in Gate keeper mode!" << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap destructor called!" << std::endl;
};