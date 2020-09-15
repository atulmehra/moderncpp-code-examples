#include <iostream>

#define TOPIC "Constexpr"

class ConstexprDynamicAlloc
{
public:
  constexpr void examplefunction()
  {
    int *var_alloc_dynamic = new int(10);
  }
};

void Feature_Constexpr_DynamicallocConstexpr()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example Description: "
            << "Dynamically allocate\
      memory inside a constexpr function"
            << std::endl;
  ConstexprDynamicAlloc obj;
  obj.examplefunction();
  std::cout << "Example End " << __func__ << std::endl;
}

void Feature_Constexpr_Destructor()
{
  std::cout << "Example Start " << __func__ << std::endl;
  std::cout << "Example coming soon" << std::endl;
  std::cout << "Example End " << __func__ << std::endl;
}

int main(int argc, char *argv[])
{
  std::cout << "Topic:" << TOPIC << std::endl;
  std::cout << std::endl;
  Feature_Constexpr_DynamicallocConstexpr();
  std::cout << std::endl;
  Feature_Constexpr_Destructor();
}