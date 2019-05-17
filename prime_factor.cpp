#include <iostream>

using namespace std;

int is_prime (int number)
{
	int denominator=number/2;
	while (denominator >= 2)
	{
		if (number%denominator == 0) 
		{
			return 0;
			break;
		}
		--denominator;
	} 
	return 1;
}

int prime_factors (int number)
{
	int denominator = 2;
	int prime_counter = 0;
	while (number > 1)
	{
		if (number%denominator == 0) 
		{	
			prime_counter = prime_counter + denominator;
			number = number/denominator;
			cout << " " << denominator << " ";
		}
		else ++denominator;
	}
	cout << " ";
	return prime_counter;
}
		
	



main ()
{
	for (int number = 1000; number >= 1; number--)
	{
	cout << "Number: " << number << "\t";
	cout << "Prime factors: ";
	int prime_counter = prime_factors (number);
	cout << "\t Sum prime factors: " << prime_counter;
	if (is_prime (prime_counter) == 1) cout << " PRIME";
	cout << "\n";
	} 
}

				
		


		
			
	
