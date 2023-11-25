#include <iostream>

using namespace std;

int main(){
	int t, a;
	cin >> t;
	while(t--)
	{
		cin >> a;
		if(!(a%2)) cout << a << " is even" << endl;
		else cout << a << " is odd" << endl;
	}
	
	return 0;
}