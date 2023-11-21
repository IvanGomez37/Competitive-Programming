#include <iostream>
#include <string>

using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		long long res = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        string num = to_string(res);
		cout <<  num[num.size() - 2] << endl;
	}
	return 0;
}