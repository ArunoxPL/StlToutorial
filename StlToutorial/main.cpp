#include <iostream>

template <typename T>

T square(T x)
{
	return x*x;
}


int main()
{

	std::cout << square<int>(5) << std::endl;
	std::cout << square<float>(5.05) << std::endl;

	system("PAUSE");
	return 0;
}