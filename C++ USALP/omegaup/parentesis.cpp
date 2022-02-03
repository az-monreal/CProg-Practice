#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	string p;

	cin >> p;

	int num = 0;

	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '(') {
			num++;
		}
		else if (p[i] == ')') {
			num--;
		}

		if (num < 0) {
			break;
		}
	}

	if (num) {
		cout << "NO";
	}
	else {
		cout << "SI";
	}

	return 0;
}