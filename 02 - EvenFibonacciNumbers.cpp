#include <iostream>

using namespace std;

int main()
{
	int finalsum = 0;
	int term1 = 1;
	int term2 = 2;

	while(term1 <= 4000000)
	{		
		if (term1 % 2 == 0)
		{
			finalsum = finalsum + term1;
		}

		int newterm2 = term1 + term2;
		term1 = term2;
		term2 = newterm2;
	}

	cout << "The sum of even-valued terms is: " << finalsum << endl;
}