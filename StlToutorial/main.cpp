#include <iostream>

template <typename T>

T square(T x)
{
	return x*x;
}

template < typename T >
class MyVector
{
	T arr[1000];
	int size;
public:
	MyVector() :size(0) {}
	void push(T x) { arr[size] = x; size++; }
	void print() const { for (int i = 0; i < size; i++) { cout << arr[i] << endl; } }
};



int main()
{

	std::cout << square<int>(5) << std::endl;
	std::cout << square<float>(5.05) << std::endl;

	system("PAUSE");
	return 0;
}