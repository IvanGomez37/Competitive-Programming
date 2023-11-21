#include <iostream>

using namespace std;

int main(){
	int n, a, b, c;
	cin >> a >> b >> c >> n;
	
	if(n < 3) cout << "NO" << endl;
	else if (a >= 1 && b >= 1 && c >= 1 && (a + b + c) >= n) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}