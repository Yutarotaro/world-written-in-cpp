#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <string>


class Human {
  std::string name;
  int age;

public:
  Human() { std::cout << "おぎゃあ" << std::endl; }
  ~Human() { std::cout << "さようなら" << std::endl; }
};
