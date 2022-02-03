#include <iostream>

using namespace std;

int binarySearch(int list[], int size, int item) {
	int index;
	int min = 0, max = size - 1;

	while (min <= max) {
		int guess = (min + max) / 2;

		if (list[guess] == item) {
		index = guess;
			break;
		}
		else if (list[guess] < item) {
			min = guess + 1;
		}
		else {
			max = guess - 1;
		}
	}

	if (min > max) {
		index = -1;
	}

	return index;
}

int main() {
	int primes[25] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	int search;

	cin >> search;

	if (binarySearch(primes, 25, search) == -1) {
		cout << "ERROR: item not in search";
	}
	else {
		cout << binarySearch(primes, 25, search);
	}

	return 0;
}