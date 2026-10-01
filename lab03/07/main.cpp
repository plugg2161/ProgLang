#include <iostream>

int main(){
	int x = 7, y = 4;
	long double d = 0.25;

	std::cout << (x / y) / d << std::endl;
	std::cout << (x / d) / y << std::endl;

	long a = 200000, b = 200000;
	long long c = 200000;

	std::cout << (a * b) * c << std::endl;
	std::cout << a * (b * c) << std::endl;

	return 0;
}
