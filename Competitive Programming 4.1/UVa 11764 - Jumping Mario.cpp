#include <iostream>

using namespace std;

int main(){
	int t, i = 1;
	cin >> t;

	while(t--)
	{
		int a, b, c, t = 0, l = 0;
		cin >> a;
		a--;
		cin >> b;
		while(a--)
		{
			cin >> c;
			if(b < c) t++;
			else if(b > c) l++;
			b = c;
		}

		cout << "Case " << i << ": " << t << " " << l << endl;
		i++;
	}
	return 0;
}