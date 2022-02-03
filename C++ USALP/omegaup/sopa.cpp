#include <iostream>
#include <cstring>
#include <string>

int main() {
	std::string name = "miguel";
	std::string letters;

	std::cin >> letters;

	int count[6] = { 0 };

	for (int i = 0; i < name.size(); i++)
		for (int j = 0; j < letters.size(); j++)
			if (letters[j] == name[i])
				count[i] += 1;

	int min = count[0];

	for (int i = 1; i < 6; i++)
		if (count[i] < min)
			min = count[i];

	std::cout << min;

	return 0;
}