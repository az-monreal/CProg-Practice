#include <iostream>
#include <string>
#include <chrono>

struct Timer {
	std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::_V2::system_clock::duration> start, end;
	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Time ellapsed: " << ms << "ms \n";
	}
};

void SlowMethod()
{
	Timer timer;

	int n;
	std::cin >> n;

	std::string in[n];

	int p[n] = { 0 };
	int m[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> in[i];
		m[i] = std::stoi(in[i]);
		while (m[i] > 9)
		{
			m[i] = 1;
			for (int j = 0; j < in[i].size(); j++)
			{
				int d = in[i][j] - '0';
				m[i] *= d;
			}
			p[i]++;
			in[i] = std::to_string(m[i]);
		}
		std::cout << p[i] << "\n";
	}
}

void NotSlowMethod() {
	Timer timer;

	int n;

	std::cin >> n;

	while (n--)
	{
		int num;
		std::cin >> num;
		int p = 0;

		while (n > 9)
		{
			++p;
			int d = 1;
			while (num)
			{
				d *= num % 10;
				n /= 10;
			}
			num = d;
		}
		std::cout << p << "\n";
	}
}

int main()
{
	SlowMethod();
	NotSlowMethod();
	return 0;
}