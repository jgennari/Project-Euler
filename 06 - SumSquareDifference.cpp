#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 101; ++i)
	{
		sum = sum + (i*i);
	}

	int square = 0;
	for (int i = 1; i < 101; ++i)
	{
		square = square + i;
	}
	square = square*square;

	cout << square - sum;
}