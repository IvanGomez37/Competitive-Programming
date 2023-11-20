#include <iostream>
#include <cmath> //floor and ceil 

using namespace std;

int main(){
	double t, a, b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		a -= 2;
		b -= 2;
		cout << (int)(ceil(a / 3) * ceil(b / 3)) << endl;
	}
	return 0;
}