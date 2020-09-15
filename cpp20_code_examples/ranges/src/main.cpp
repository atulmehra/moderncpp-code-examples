#include <ranges>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <string>

#define TOPIC "Ranges"

void Feature_Ranges_LazyAlgorithimsWithFunctionChaining()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example Description: "
            << "Print next number of digits > 5. Demoes Lazy Algorithims & Function Chaning"
            << std::endl;

  std::vector myvector{3, 1, 2, 9, 4, 8, 7, 5, 6};
  auto greater_than_five = [](int i) { return i > 5; };
  auto next_number = [](int i) { return i + 1; };
  auto filtered = myvector | std::ranges::views::filter(greater_than_five) | std::views::transform(next_number);
  std::cout << "Print filtered " << std::endl;

  for (const auto i : filtered)
  {
    std::cout << i << " " << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Example End " << __func__ << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}

void Feature_Ranges_Views()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example Description: "
            << "Print next employee from the given map whose employee id is > 5"
            << std::endl;

  std::unordered_map<int, std::string> employees{{3, "Atul"}, {1, "Vishal"}, {2, "Rashid"}, {9, "John"}};
  auto greater_than_five = [](int i) { return i > 5; };
  auto next_number = [](int i) { return i + 1; };
  auto filtered = employees | std::ranges::views::keys | std::ranges::views::filter(greater_than_five) | std::views::transform(next_number);

  for (const auto i : filtered)
  {
    std::cout << i << " " << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Example End " << __func__ << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}

void Feature_Ranges_SimplifiedUseWithAlgos()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example Description: "
            << "Sort a given vector. Demonstrates cleaner interface"
            << std::endl;

  std::vector myvector{3, 1, 2, 9, 4, 8, 7, 5, 6};
  // Before C++20
  //std::sort(myvector.begin(), myvector.end());

  std::ranges::sort(myvector);

  for (const auto i : myvector)
  {
    std::cout << i << " " << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Example End " << __func__ << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}

int main(int argc, char *argv[])
{
  std::cout << "Topic:" << TOPIC << std::endl;
  std::cout << std::endl;
  Feature_Ranges_SimplifiedUseWithAlgos();
  Feature_Ranges_Views();
  Feature_Ranges_LazyAlgorithimsWithFunctionChaining();
  std::cout << std::endl;
}