#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	int res = b - a;
	if(res > 0) 
        if(res == 1) cout << "Dr. Chaz will have " << res << " piece of chicken left over!" << endl;
        else cout << "Dr. Chaz will have " << res << " pieces of chicken left over!" << endl;
	else 
        if(res < -1) cout << "Dr. Chaz needs " << abs(res) << " more pieces of chicken!" << endl;
        else cout << "Dr. Chaz needs " << abs(res) << " more piece of chicken!" << endl;
	return 0;
}