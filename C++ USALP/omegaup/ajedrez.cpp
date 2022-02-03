#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	int r;
	char c;

	cin >> c >> r;

	cout << ((((r)+(c - 'a')) % 2) ? "NEGRO" : "BLANCO");

	return 0;
}