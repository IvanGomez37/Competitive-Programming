#include <iostream>
#include <vector>

using namespace std;

int main(){
	int g, s, c;
	cin >> g >> s >> c;
	
	int buy_power = (g * 3) + (s * 2) + (c * 1);
	vector<int> victory_costs = {8, 5, 2}, treasure_costs = {6, 3, 0};
	
	int vi = 0, ti = 0;
	for(vi = 0; vi < 3; vi++)
		if(victory_costs[vi] <= buy_power) break;
	for(ti = 0; ti < 3; ti++)
		if(treasure_costs[ti] <= buy_power) break;

	switch(vi)
	{
		case 0: cout << "Province or ";
		break;
		case 1: cout << "Duchy or ";
		break;
		case 2: cout << "Estate or ";
		break;
	}
	switch(ti)
	{
		case 0: cout << "Gold" << endl;
		break;
		case 1: cout << "Silver" << endl;
		break;
		default: cout << "Copper" << endl;
		break;
	}

	return 0;
	
}