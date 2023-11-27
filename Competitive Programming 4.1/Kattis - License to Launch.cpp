
#include <iostream>

using namespace std;

int main(){
	int t, i = 0;
	long long mini = 10e9 + 1, day, aux;
    cin >> t;
	while(t--)
	{
		cin >> aux;
		if(mini > aux)
		{
			mini = aux;
			day = i;
		}
		i++;
	}

	cout << day << endl;
	return 0;
}