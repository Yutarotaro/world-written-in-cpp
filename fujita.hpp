#pragma once
#include "human.hpp"
#include <memory>
#include <vector>
#include <string>


class Fujita : public Human {
  std::vector<std::string> name_history;

public:
  Fujita(){born();};
  void born() { std::cout << "なもさやーす" << std::endl; }
  void live(){
    std::string message;
    while(std::cin >> message){
      std::cout << "そう思う" << std::endl;
    }
  }
};
