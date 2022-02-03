#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
#include <cstring>
#include <array>

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

void SieveOfEratosthenes(long long int n)
{
	Timer timer;
	// Create a boolean array
	// "prime[0..n]" and initialize
	// all entries it as true.
	// A value in prime[i] will
	// finally be false if i is
	// Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	std::vector<long long int> primes;

	for (long long int p = 2; p * p <= (n); p++)
	{
		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples
			// of p greater than or
			// equal to the square of it
			// numbers which are multiple
			// of p and are less than p^2
			// are already been marked.
			for (long long int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	for (long long int i = 2; i <= n; i++)
		if (prime[i])
			primes.push_back(i);

	// for (long long int i : primes)
	// 	std::cout << i << " ";

	std::cout << std::endl;
}

void getPrimes(long long int max) {
	Timer timer;

	std::vector<long long int> primes;

	for (long long int i = 2; i <= max; i++) {
		bool prime = true;
		// for (long long int j = 2; j <= std::sqrt(i); j++) {
		for (long long int j : primes) {
			if (i % j == 0) {
				prime = false;
				break;
			}

			if (j > std::sqrt(i))
				break;
		}

		if (prime)
			primes.push_back(i);
		// std::cout << i;
	}
	// for (long long int p : primes)
		// std::cout << p << " ";
	// std::cout << "done \n";
}

int main() {
	long long int num = 6000;

	SieveOfEratosthenes(num);
	// getPrimes(num);

	return 0;
}