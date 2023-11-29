#include <iostream>
#include <string>

using namespace std;

int g(string a)
{
	int ret = 0;
	for(int i = 0; i < a.size(); i++)
	{
		ret += (int)a[i] - '0';
	}
	return ret;
}

int main(){
	int a;
	while(cin >> a)
	{
		if(!a) break;
		
		while(to_string(a).size() != 1)
		{
			a = g(to_string(a));
		}
		cout << a << endl;
	}

	return 0;
}