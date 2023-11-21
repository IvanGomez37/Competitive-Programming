#include <iostream>

using namespace std;

int main(){
	int bytes, t;
	cin >> bytes >> t;
	
	int a, res = 0;
	while(t--)
	{
		cin >> a;
        res += bytes;
		res -= a;
	}

	cout << res + bytes << endl;
	return 0;
}