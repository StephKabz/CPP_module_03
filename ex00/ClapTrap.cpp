/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:35:12 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/12 18:42:17 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), 
    energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment ClapTrap::operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
};

void ClapTrap::attack(const std::string &target)
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
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " has already been destroyed!" << std::endl;
		return;
	}
	if (amount >= this->hitPoints)
	{
		this->hitPoints = 0;
		std::cout << this->name << " Destroyed!!" << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->name << " received " << amount << " points of damage!" << std::endl;
	}
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
	{
		std::cout << this->name << " has no energie point left!" << std::endl;
		return;
	}
	if (this->hitPoints == 0) 
	{
    	std::cout << this->name << " is destroyed and cannot be repaired!" << std::endl;
    	return;
	}
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout << this->name << " has gained " << amount << " hit points" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " ClapTrap destructor called" << std::endl;
};
