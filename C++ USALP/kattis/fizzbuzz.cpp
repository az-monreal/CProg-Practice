#include <iostream>

int main()
{
	int f, b, n;
	std::cin >> f >> b >> n;

	for (int i = 1; i <= n; i++)
	{
		if (!(i % f)) std::cout << "Fizz";
		if (!(i % b)) std::cout << "Buzz";
		if (i % f && i % b) std::cout << i;
		std::cout << "\n";
	}
}