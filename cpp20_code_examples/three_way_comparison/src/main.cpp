#include "moderncpp_code_examples_config.h"
#include <iostream>
#include <compare>

#define TOPIC "Three_Way_Comparison"

struct FeatureThreeWayComparison1
{
public:
  FeatureThreeWayComparison1(int a, int b, int c) : mem1{a}, mem2{b}, mem3{c}
  {
  }
  auto operator<=>(const FeatureThreeWayComparison1 &r) const
  {
    std::cout << "Using 3 way comparison operator " << std::endl;
    if (mem1 != r.mem1)
      return mem1 <=> r.mem1;
    else if (mem2 != r.mem2)
      return mem2 <=> r.mem2;
    else if (mem3 != r.mem3)
      return mem3 <=> r.mem3;

    return std::strong_ordering::equivalent;
  }

private:
  int mem1, mem2, mem3;
};

struct FeatureThreeWayComparison2
{
public:
  FeatureThreeWayComparison2(int a, int b, int c) : mem1{a}, mem2{b}, mem3{c}
  {
  }

private:
  int mem1, mem2, mem3;
};

void ThreeWayCompareHelperFunction(FeatureThreeWayComparison1 &obj1,
                                   FeatureThreeWayComparison1 &obj2)
{
  auto v = (obj1 <=> obj2);
  if (v == 0)
  {
    std::cout << "Objects 1 & 2 are equivalent" << std::endl;
  }
  else if (v > 0)
  {
    std::cout << "Object 1 > Object 2" << std::endl;
  }
  else
  {
    std::cout << "Object 1 < Object 2." << std::endl;
  }
}

void Feature_ThreeWayComparison_SameClassObjs()
{
  const std::string FEATURE_NAME = "Feature_ThreeWayComparison_SameClassObjs";
  demo_start(FEATURE_NAME);
  FeatureThreeWayComparison1 obj1{1, 2, 3};
  FeatureThreeWayComparison1 obj2{4, 5, 6};
  FeatureThreeWayComparison1 obj3{1, 2, 3};

  ThreeWayCompareHelperFunction(obj1, obj2);
  demo_end(FEATURE_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_ThreeWayComparison_SameClassObjs();
}