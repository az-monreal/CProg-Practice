#include <iostream>

int main() {
	int n, d;

	std::cin >> n >> d;

	if (n % d) {
		std::cout << n / d << " " << n % d << "/" << d;
	}
	else {
		std::cout << n / d;
	}

	return 0;
}