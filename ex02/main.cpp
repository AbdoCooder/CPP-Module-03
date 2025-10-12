// Copyright (c) 2025 Abdelkader Benajiba

#include "FragTrap.hpp"

int main() {
  FragTrap a;

  a.attack("by_a");

  a.takeDamage(5);
  a.beRepaired(3);


  // Drain energy
  for (int i = 0; i < 11; ++i)
    a.attack("draining-bot");

  // Try to act with 0 HP
  a.takeDamage(100);
  a.attack("nobody");
  a.beRepaired(10);

  return 0;
}
