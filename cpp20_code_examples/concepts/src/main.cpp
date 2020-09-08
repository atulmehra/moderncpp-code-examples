#include <iostream>
#include <concepts>

#define TOPIC "Concepts"

template <class T>
concept ConceptMoveableAndComparable = requires(T a, T b)
{
  a == b;
  a = std::move(b);
};

template <ConceptMoveableAndComparable T>
void SimpleConceptsExample(T)
{
  std::cout << "Function is valid " << __func__ << std::endl;
}

template <typename T>
struct SampleStruct
{
  bool operator==(SampleStruct<T> &) { return true; };
  SampleStruct<T> &operator=(SampleStruct<T> &&) = default;
  SampleStruct(SampleStruct<T> &&) = default;
  SampleStruct(const SampleStruct<T> &) = default;
  SampleStruct() = default;
};

template <typename T>
struct SampleStruct2
{
  bool operator==(SampleStruct2<T> &) { return true; };
  //Because of this, SampleStruct2 fails the consraint
  //defined by ConceptMoveableAndComparable
  SampleStruct2<T> &operator=(SampleStruct2<T> &&) = delete;
  SampleStruct2(SampleStruct2<T> &&) = default;
  SampleStruct2(const SampleStruct2<T> &) = default;
  SampleStruct2() = default;
};

void Feature_Concepts_SimpleConceptsExample()
{
  std::cout << "Start " << __func__ << std::endl;
  SampleStruct<int> s;
  SimpleConceptsExample(s);

  //Following code will not compile as it will fail the constraint
  //defined by ConceptMoveableAndComparable
  // SampleStruct2<int> s2;
  // SimpleConceptsExample(s2);
  std::cout << "End " << __func__ << std::endl;
}

int main(int argc, char *argv[])
{
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Concepts_SimpleConceptsExample();
}