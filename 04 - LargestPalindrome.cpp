#include <iostream>

using namespace std;

int reverse(int num)
{
    int new_num = 0;
    while (num != 0)
    {
        int digit = num % 10;     // Move the declaration inside the loop
        new_num = new_num * 10 + digit;
        num /= 10;
    }
    return new_num;
}

int main()
{
	int largest_palindrome = 0;

	// Start out an outside loop, don't start less than 100
	for(int i=100; i<1000; ++i) 
	{
		// Start an inside loop (not sure why j=i)
		for(int j=i; j<1000; ++j) 
		{
			// Check to see if it's the reverse of itself & it's the largest we've found
			if (reverse(i*j) == (i*j) && (i*j) > largest_palindrome)
			{
				// Save to the largest file
				largest_palindrome = i * j;
			}
		}
	}

	// Write to the console
	cout << largest_palindrome;
}