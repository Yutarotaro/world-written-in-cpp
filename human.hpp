#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Human {
  std::string _name;
  int _age;
  std::vector<std::shared_ptr<Human>> friends;
  std::shared_ptr<Human> mother;
  std::shared_ptr<Human> father;

public:
  Human() : _age(0) { born(); }
  Human(std::string name) : _name(name), _age(0) { born(); }
  void born() { std::cout << "おぎゃあ" << std::endl; }
  std::string getName() { return _name; }
  int getAge() { return _age; }
  ~Human() { std::cout << "さようなら" << std::endl; }
  virtual void live() = 0;
};
