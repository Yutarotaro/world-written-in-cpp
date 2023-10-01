#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Human {
  std::string name;
  int age;

public:
  Human() { std::cout << "おぎゃあ" << std::endl; }
  ~Human() { std::cout << "さようなら" << std::endl; }
  virtual void live() = 0;
};
