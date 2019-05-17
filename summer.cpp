#include <iostream>
#include <string>
using namespace std;
int main()
{
	int tote = 1;
	int summ = 0;
	while (tote!=0)
	{
	cin >> tote;
	summ=summ+tote;
	cout << summ << "\n";
	}
}