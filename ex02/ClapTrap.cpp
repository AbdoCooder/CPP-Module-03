// Copyright (c) 2025 Abdelkader Benajiba

#include "ClapTrap.hpp"

#include <iostream>
#include "Colors.hpp"

ClapTrap::ClapTrap() 
    : name("anonymous"),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0) {
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " constructed (default)" << std::endl;
}

ClapTrap::ClapTrap(const std::string& newName)
    : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage) {
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " copy-constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " Destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " is dead!" << std::endl;
    return;
  }
  if (energyPoints == 0) {
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " cannot "
              << CL_RED << "attack" << CL_RESET << ": no energy points left." << std::endl;
    return;
  }
  energyPoints--;
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " "
            << CL_CYAN << "attacks" << CL_RESET << " " << target << ", causing "
            << CL_CYAN << attackDamage << CL_RESET << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " is dead!" << std::endl;
    return;
  }
  if (energyPoints > 0) {
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " "
              << CL_GREEN << "repairs" << CL_RESET << " itself for "
              << CL_GREEN << amount << CL_RESET
              << " hit points (" << CL_GREEN << (hitPoints - amount) << CL_RESET
              << " -> " << CL_GREEN << hitPoints << CL_RESET << " HP)." << std::endl;
  } else {
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET
              << " cannot " << CL_RED << "repair" << CL_RESET << ": no energy points left." << std::endl;
    return;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " is already dead!" << std::endl;
    return;
  }
  unsigned int hpBefore = hitPoints;
  if (amount > hitPoints) {
    hitPoints = 0;
  } else {
    hitPoints -= amount;
  }
  std::cout << "ClapTrap "  << CL_RESET << name << CL_RESET << " takes "
            << CL_RED << amount << CL_RESET << " points of damage ("
            << CL_RED << hpBefore << CL_RESET << " -> "
            << CL_RED << hitPoints << CL_RESET << " HP)." << std::endl;
}
