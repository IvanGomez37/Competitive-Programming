#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int g, aux, aux2, flag = 0;
		cin >> g;
		cin >> aux;
		for(int i = 2; i <= g; i++)
		{
			cin >> aux2;
			if(aux + 1 != aux2 && !flag)
            {
                cout << i << endl;
                flag = 1;
            }
			aux = aux2;
		}
	}

	return 0;
}