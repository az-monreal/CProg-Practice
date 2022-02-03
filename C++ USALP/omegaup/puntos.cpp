#include <iostream>
#include <cmath>

int main() {
	int num;
	std::cin >> num;

	float dist = 0;
	int x[num], y[num];
	std::cin >> x[0] >> y[0];

	for (int i = 1; i < num; i++) {
		std::cin >> x[i] >> y[i];

		dist += std::sqrt(std::pow(x[i - 1] - x[i], 2) + std::pow(y[i - 1] - y[i], 2));
	}

	dist += std::sqrt(std::pow(x[0] - x[num - 1], 2) + std::pow(y[0] - y[num - 1], 2));

	std::cout.precision(2);
	std::cout << std::fixed << dist;

	return 0;
}