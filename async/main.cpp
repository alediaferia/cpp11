#include <future>
#include <iostream>
#include <vector>

int main() {
  std::vector<std::future<int>> futures;
  for (int i = 0; i < 10; i++) 
    futures.push_back(std::future<int>(std::async([](int m) { return m * 2;} , i)));

  std::cout << "Message from main." << std::endl;

  //retrive and print the value stored in the future
  for (auto &comp : futures)
    std::cout << "Computed: " << comp.get() << std::endl;

  return 0;
}

