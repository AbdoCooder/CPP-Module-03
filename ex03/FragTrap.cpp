// Copyright (c) 2025 Abdelkader Benajiba

#include "FragTrap.hpp"
#include "Colors.hpp"

#include <iostream>

FragTrap::FragTrap() {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << CL_YELLOW << "FragTrap "  << CL_RESET << name << CL_RESET << " constructed (default)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other.name) {
  *this = other;
  std::cout << CL_YELLOW << "FragTrap "  << CL_RESET << name << CL_RESET << " constructed (copy)" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  std::cout << CL_YELLOW << "FragTrap "  << CL_RESET << name << CL_RESET << " assigned" << std::endl;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << CL_YELLOW << "FragTrap "  << CL_RESET << name << CL_RESET << " destructed" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << CL_YELLOW << "FragTrap "  << CL_RESET << name << CL_RESET << " is requesting a high five!" << std::endl;
}
