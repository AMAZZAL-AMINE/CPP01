/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:35:59 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 18:23:11 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Harl::Harl() {
  
}

void Harl::debug() {
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level) {
  std::string moods[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*func[4])();
  func[0] = &Harl::debug;
  func[1] = &Harl::info;
  func[2] = &Harl::warning;
  func[3] = &Harl::error;
  
  int count  = 0;
  int stop = -1;
  while (count < 4) {
    if (level == moods[count]) {
      stop = count;
      break;
    }
    count++;
  }
  if (stop != -1)
    (this->*func[stop])();
  else {
    std::cout << "Harl not found" << std::endl;
    exit(0);
  }
}
