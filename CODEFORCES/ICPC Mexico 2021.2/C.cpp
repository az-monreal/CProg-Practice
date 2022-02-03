#include <iostream>
#include <string>

int main()
{
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string in;

		std::cin >> in;

		int count = 0, cut = 0;

		for (int j = 0; j < in.size(); j++)
		{
			count++;
			if (in[j] == 'R')
				count -= 2;

			// count += (in[j] == 'B') ? 1 : -1;

			if (count <= 0 && in[j] == 'B')
				cut = j, count = 1;
		}

		std::cout << cut << "\n";
	}

	return 0;
}