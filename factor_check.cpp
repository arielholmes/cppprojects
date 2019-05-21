#include <iostream>
using namespace std;

int main()
{
for (int number = 1000; number > 1; number--)
{
	int factor_count = 0, factor = 2, remainder = number;
	while (remainder > 1)
	{
		if (remainder%factor == 0)
		{
			remainder = remainder/factor;
			factor_count = factor_count+factor;
			factor = 2;
		}
		else 
		{
			factor++;
		}
	}
	remainder = factor_count;
	while (remainder == factor_count)
	{
		if (factor_count%factor == 0)
		{
			if (factor_count == factor) cout << number << " ";
			remainder--;
		}
		else factor++;
	}
}
}
