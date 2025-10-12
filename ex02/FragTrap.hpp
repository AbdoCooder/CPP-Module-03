// Copyright (c) 2025 Abdelkader Benajiba

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);
  ~FragTrap();
  void highFivesGuys(void);
};

#endif  // FRAGTRAP_HPP
