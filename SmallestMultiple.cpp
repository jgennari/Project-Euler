#include <iostream>

using namespace std;

int main()
{
	for(int i=1; i<10000000000; ++i) 
	{
		bool has_remainder = false;

		for(int j=2; j<21; ++j) 
		{
			if (i%j != 0)
			{
				has_remainder = true;
			}
		}		

		if (!has_remainder)
		{
			continue;
			cout << "No remainder: " << i << "\n";
		}
	}
}