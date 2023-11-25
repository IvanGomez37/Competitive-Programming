
#include <iostream>

using namespace std;

int main(){
	int t, l, h, w, i = 1;
	cin >> t;
	while(t--)
	{
		cin >> l >> h >> w;
		if(l > 20 || h > 20 || w > 20) cout << "Case " << i << ": bad" << endl;
		else cout << "Case " << i << ": good" << endl;

		i++;
	}

	return 0;
}