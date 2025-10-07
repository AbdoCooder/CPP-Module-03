// Copyright (c) 2025 Abdelkader Benajiba

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() { std::cout << "ClapTrap " + name + " Constructed" << std::endl; }

ClapTrap::ClapTrap(std::string &newName) : name(newName), hitPoints (10), energyPoints (10), attackDamage (0) {
  std::cout << "ClapTrap " + name + " Constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) { *this = other; }

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " + name + " Destructed" << std::endl; }
