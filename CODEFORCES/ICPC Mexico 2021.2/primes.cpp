#include <bits/stdc++.h>

bool isPrime(long long int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (long long int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}
// Function to print primes
void printPrime(long long int n)
{

	for (long long int i = 2; i <= n; i++) {
		if (isPrime(i))
			std::cout << i << " ";
	}
}




//Print primes using the SieveOfErathosthenes
void SieveOfEratosthenes(long long int n)
{
	// Create a boolean array
	// "prime[0..n]" and initialize
	// all entries it as true.
	// A value in prime[i] will
	// finally be false if i is
	// Not a prime, else true.
	bool prime[n + 1];
	std::memset(prime, true, sizeof(prime));

	for (long long int p = 2; p * p <= n; p++)
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

	// Print all prime numbers
	for (long long int p = 2; p <= n; p++)
		if (prime[p])
			std::cout << p << " ";
}

int main()
{
	long long int n = 10;
	// printPrime(n);
	// std::cout << std::endl;
	SieveOfEratosthenes(n);
	return 0;
}