#include "moderncpp_code_examples_config.h"
#include <iostream>

#define TOPIC "BitFields"

template <typename... folding_exp_pack_args>
auto unary_left_fold(folding_exp_pack_args... args)
{
  return (... + args);
}

void Feature_Folding_Expression_UnaryRightFold()
{
  const std::string FEATURE_NAME = "Feature_Folding_Expression_UnaryRightFold";
  demo_start(FEATURE_NAME);
  auto output = unary_left_fold(1, 2, 3, 4, 5);
  std::cout << "\tResult of unary left fold " << output << std::endl;
  demo_end(FEATURE_NAME);
}

void Feature_Folding_Expression_UnaryLeftFold()
{
  const std::string FEATURE_NAME = "Feature_Folding_Expression_UnaryLeftFold";
  demo_start(FEATURE_NAME);
  std::cout << "\tDemo Under construction" << std::endl;
  demo_end(FEATURE_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Folding_Expression_UnaryRightFold();
  Feature_Folding_Expression_UnaryLeftFold();
}