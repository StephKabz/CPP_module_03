/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:35:38 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/12 18:35:45 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << "=== Test 1: Basic actions ===" << std::endl;
    ClapTrap clap1("Bob");
    clap1.attack("target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    
    std::cout << "\n=== Test 2: Destruction ===" << std::endl;
    ClapTrap clap2("Alice");
    clap2.takeDamage(20);
    clap2.attack("target2");  // Should fail
    clap2.beRepaired(5);      // Should fail
    
    std::cout << "\n=== Test 3: No energy ===" << std::endl;
    ClapTrap clap3("Charlie");
    for (int i = 0; i < 11; i++)
        clap3.attack("target3");
    
    return 0;
}
