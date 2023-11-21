#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	float a, b, res = 0;
	while(t--)
	{
		cin >> a >> b;
		res += a * b;
	}

	cout << res << endl;
}