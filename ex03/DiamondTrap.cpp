// Copyright (c) 2025 Abdelkader Benajiba

#include "DiamondTrap.hpp"
#include "Colors.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("anonymous_clap_name"),
      FragTrap(),
      ScavTrap(),
      name("anonymous") {
  // DiamondTrap stats: HP from FragTrap (100), EP from ScavTrap (50), AD from FragTrap (30)
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 30;
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET << " constructed (default)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other.name + "_clap_name"),
      FragTrap(other),
      ScavTrap(other),
      name(other.name) {
  *this = other;
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET << " constructed (copy)" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &newName)
    : ClapTrap(newName + "_clap_name"),
      FragTrap(),
      ScavTrap(),
      name(newName) {
  // DiamondTrap stats: HP from FragTrap (100), EP from ScavTrap (50), AD from FragTrap (30)
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 30;
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET << " constructed (name)" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET << " assigned" << std::endl;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET << " destructed" << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << CL_YELLOW << "DiamondTrap "  << CL_RESET << name << CL_RESET
            << " is also ClapTrap " << ClapTrap::name << std::endl;
}
