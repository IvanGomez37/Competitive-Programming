
#include <iostream>

using namespace std;

int main(){
	int t, i = 1;
	cin >> t;

	while(t--)
	{
		int n, a, max = 0;
		cin >> n;
		while(n--)
		{
			cin >> a;
			if(a > max) max = a;
		}
		cout << "Case " << i << ": " << max << endl;
        i++;
	}
	return 0;
}