#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "main.h"

class HumanB {
  private :
    std::string name;
    Weapon *weapn;
  public :
    HumanB();
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon  &weapn);
};

#endif