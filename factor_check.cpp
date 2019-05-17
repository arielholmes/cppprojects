#include <iostream>
#include <string>

using namespace std;

//check if a number is an integer
int integer_check (float input)
{
	int nearest_int;
	int answer;
	nearest_int = input;
	if (nearest_int-input==0)
	{
		answer=0;
		return answer;
	}
	else 
	{
		answer=1;
		return answer;
	}
}
	
//Number input and main
int main()
{
	float question=1;
	while (question!=0)
	{
	int counter=0;
	cout << "Enter number: ";
	cin >> question;
	int answer = question/2;
	cout << "Factors are:\n";
	for (answer; answer > 1; answer--)
	{
		float check = question/answer;
		if (integer_check(check)==0)
		{
			int whole = answer; //change to integer for printing
			cout << answer <<"   ";
			++counter;
		}
	}
	if (counter==0) 
	{
		cout << "No output.  Prime number baby!\n";
	}
	else cout << "\n";
	}
}
	
	
	