// Copyright (c) 2025 Abdelkader Benajiba

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
  DiamondTrap();
  DiamondTrap(const std::string &newName);
  DiamondTrap(const DiamondTrap &other);
  DiamondTrap &operator=(const DiamondTrap &other);
  ~DiamondTrap();
  void whoAmI();
 private:
  std::string name; 
};

#endif  // DIAMONDTRAP_HPP
