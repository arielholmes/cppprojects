#include <iostream>

using namespace std;

struct PlayerInfo
{
	int skill_level;
	string name;
};

int main()
{
	PlayerInfo players [5];
	for ( int i = 0; i < 5; i++)
	{
		cout << "Name for plaer : " << i << '\n';
		cin >> players[i].name;
		cout << "Skill level for " << players[i].name << "\n";
		cin >> players[i].skill_level;
	}
	for ( int i = 0; i < 5; i++)
	{
		cout << players[i].name << " is at skill level " << players[i].skill_level << '\n';
	}
}
	

	
