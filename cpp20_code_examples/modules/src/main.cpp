#include "moderncpp_code_examples_config.h"
#include <iostream>
import modules_example;

#define TOPIC "Modules"

void Feature_Modules_SimpleModuleExample()
{
  const std::string FEATURE_EXAMPLE_NAME = "Modules_SimpleModuleExample";
  demo_start(FEATURE_EXAMPLE_NAME);
  SimpleModuleExample();
  demo_end(FEATURE_EXAMPLE_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Modules_SimpleModuleExample();
}