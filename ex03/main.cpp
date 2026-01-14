/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 02:20:19 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/14 15:15:23 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap diamond("Diamond");
    
    std::cout << "\n=== DiamondTrap actions ===" << std::endl;
    diamond.attack("enemy");        // Should use ScavTrap::attack()
    diamond.takeDamage(50);
    diamond.beRepaired(30);
    diamond.whoAmI();
    
    std::cout << "\n=== ScavTrap ability ===" << std::endl;
    diamond.guardGate();
    
    std::cout << "\n=== FragTrap ability ===" << std::endl;
    diamond.highFivesGuys();
    
    std::cout << "\n=== End of scope ===" << std::endl;
    return 0;
}

