// Copyright (c) 2025 Abdelkader Benajiba

#include "ScavTrap.hpp"
#include "Colors.hpp"

#include <iostream>

ScavTrap::ScavTrap() {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " constructed (default)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)  : ClapTrap(other.name) {
  *this = other;
  std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " constructed (copy)" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " assigned" << std::endl;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (hitPoints == 0) {
    std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " is dead!" << std::endl;
    return;
  }
  if (energyPoints == 0) {
    std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " cannot "
              << CL_RED << "attack" << CL_RESET << ": no energy points left." << std::endl;
    return;
  }
  energyPoints--;
  std::cout << CL_YELLOW << "ScavTrap " << CL_RESET << name << CL_RESET << " "
            << CL_CYAN << "attacks" << CL_RESET << " " << target << ", causing "
            << CL_CYAN << attackDamage << CL_RESET << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << CL_YELLOW << "ScavTrap "  << CL_RESET << name << CL_RESET << " is now in Gate keeper mode." << std::endl;
}
