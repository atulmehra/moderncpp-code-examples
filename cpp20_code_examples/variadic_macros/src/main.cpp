#include <iostream>

#define TOPIC "Variadic Macros"

#define eprintf(format, ...) \
  fprintf(stderr, format __VA_OPT__(, ) __VA_ARGS__)

void Feature_VariadicMarcros_SimpleExample()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example Description: "
            << "Simple Usage of variadic macros"
            << std::endl;
  eprintf("Atul", "Aaastha", "Amaira");
  std::cout << std::endl;
  std::cout << "Example End " << __func__ << std::endl;
}

int main(int argc, char *argv[])
{
  std::cout << "Topic:" << TOPIC << std::endl;
  std::cout << std::endl;
  Feature_VariadicMarcros_SimpleExample();
  std::cout
      << std::endl;
}