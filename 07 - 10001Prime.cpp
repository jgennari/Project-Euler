#include <iostream>
#include <math.h>       /* sqrt */

using namespace std;

bool is_prime(int a)
{
	int b = sqrt(a);

	for (int i = 2; i <= b; ++i)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int foundprimes = 0; // Number of primes found so far
	int prime = 2; // Prime is any number greater than 1
	int findprime = 10001; // Find the 10001 prime

	while (foundprimes < findprime) // Keep looking until we get to findprime
	{
		if (is_prime(prime)) // Check if prime
			foundprimes++; // If so, increment the count
		
		cout << "Found: " << prime << endl; // Write to the console every prime found
		prime++; // Increment the prime number
	}
}