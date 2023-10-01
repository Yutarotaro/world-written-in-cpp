#include "fujita.hpp"
#include "human.hpp"
#include <memory>
#include <thread>
#include <vector>

int main() {
  std::vector<std::shared_ptr<Human>> people;
  std::shared_ptr<Human> fujita = std::make_shared<Fujita>();
  people.push_back(fujita);

  for (auto &person : people) {
    person->live();
  }
}
