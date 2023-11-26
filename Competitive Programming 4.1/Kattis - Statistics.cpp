#include <iostream>

using namespace std;

int main(){
	int n, i = 1;
	while(cin >> n)
	{
		int mini=1000001, maxi=-1000001, aux;
		while(n--)
		{
			cin >> aux;
			if(aux < mini) mini = aux;
			if(aux > maxi) maxi = aux;
		}
		cout << "Case " << i << ": " << mini << " " << maxi << " " << maxi - mini << endl;
		i++;
	}

	return 0;
}