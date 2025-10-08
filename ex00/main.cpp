// Copyright (c) 2025 Abdelkader Benajiba

#include "ClapTrap.hpp"

int main() {
  ClapTrap a("Alpha");
  ClapTrap b("Beta");

  a.attack("target-dummy");
  b.takeDamage(5);
  b.beRepaired(3);

  // Drain energy
  for (int i = 0; i < 11; ++i)
    a.attack("training-bot");

  // Try to act with 0 HP
  b.takeDamage(100);
  b.attack("nobody");
  b.beRepaired(10);

  return 0;
}
