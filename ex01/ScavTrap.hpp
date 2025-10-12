// Copyright (c) 2025 Abdelkader Benajiba

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap();
  void attack(const std::string& target);
  void guardGate();
};

#endif  // SCAVTRAP_HPP
