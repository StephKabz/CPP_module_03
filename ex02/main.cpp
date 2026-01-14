/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 02:20:19 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/13 02:39:02 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creating FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");
    
    std::cout << "\n=== FragTrap actions ===" << std::endl;
    frag.attack("target");
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.highFivesGuys();
    
    std::cout << "\n=== End of scope ===" << std::endl;
    return 0;
}
