#include <iostream>

using namespace std;

int main(){
	int n, i = 1;
	while(cin >> n)
	{
		if(n == 0) break;
		
		int balance = 0, a;
		while(n--)
		{
			cin >> a;
			if(!a) balance--;
			else balance++;
		}

		cout << "Case " << i << ": " << balance << endl;
		i++;
	}	

	return 0;
}