/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:47:17 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/14 15:13:13 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unNamed_clap_name"), ScavTrap(), FragTrap(), name("unNamed")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
		ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
};

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
		ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	this->name = other.name;
	return (*this);
};

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
};

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = " << this->name << std::endl;
	std::cout << "ClapTrap name = " << ClapTrap::name << std::endl;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
};
