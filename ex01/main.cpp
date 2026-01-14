/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 02:20:19 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/13 02:20:32 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("Guardian");
    
    std::cout << "\n=== ScavTrap actions ===" << std::endl;
    scav.attack("intruder");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();
    
    std::cout << "\n=== Copy test ===" << std::endl;
    ScavTrap scav2(scav);
    scav2.attack("enemy");
    
    std::cout << "\n=== End of scope ===" << std::endl;
    return 0;
}