#include <iostream>

int main() {
	int max;

	std::cin >> max;

	int last = 0, current = 1;

	while (current < max) {
		int temp = current;

		current += last;
		last = temp;

		for (int i = last + 1; i < current; i++) {
			if (i == max) {
				break;
			}
			std::cout << i << " ";
		}
	}

	return 0;
}