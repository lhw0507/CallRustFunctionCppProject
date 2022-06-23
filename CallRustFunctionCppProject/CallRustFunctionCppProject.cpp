
#include <iostream>

struct RustObject
{
	int Key;
	double dDiameter;
	int enType;
};

extern "C" void hello();
extern "C" int int_from_rust();
extern "C" RustObject struct_from_rust();

int main()
{
	hello();

	auto object = struct_from_rust();

	std::cout << int_from_rust() << std::endl;

	std::cout << object.Key << std::endl;
	std::cout << object.dDiameter << std::endl;
	std::cout << object.enType << std::endl;

	int a = 10;
}
