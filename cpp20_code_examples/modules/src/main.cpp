#include <iostream>
import modules_example;

#define TOPIC "Modules"

void Feature_Modules_SimpleModuleExample()
{
  const std::string FEATURE_EXAMPLE_NAME = "Modules_SimpleModuleExample";
  std::cout << "Start " << __func__ << std::endl;
  SimpleModuleExample();
  std::cout << "End " << __func__ << std::endl;
}

int main(int argc, char *argv[])
{
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Modules_SimpleModuleExample();
}