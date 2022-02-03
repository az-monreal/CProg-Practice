#include <iostream>

using std::cin;
using std::cout;

int main() {
	long int n;

	cin >> n;

	long int s = 0;

	for (long int i = 0; i < n - 1; i++) {
		int t;
		cin >> t;

		s += t;
	}

	int f = ((n + 1) * n * 0.5) - s;

	cout << f;

	return 0;
}