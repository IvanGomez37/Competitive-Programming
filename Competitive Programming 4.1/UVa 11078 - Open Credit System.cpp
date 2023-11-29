#include <iostream>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while(t--)	
	{
		cin >> n;
		int mini = 150001, maxi = -150001, res = -150001, aux;
		while(n--)
		{
			cin >> aux;
			if(aux > maxi)
            {
                if(res < maxi - aux) res = maxi - aux;
                maxi = aux;
            }
			else if(maxi - aux > res) res = maxi - aux;
		}
		cout << res << endl;
	}
	return 0;
}