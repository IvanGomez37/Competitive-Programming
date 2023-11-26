#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	string s;
	while(t--)
	{
		cin >> s;
        int f = s.find("+");
		if(s.find("+") < s.size()) cout << stoi(s.substr(0, f)) + stoi(s.substr(f + 1, s.size() - f)) << endl;
		else cout << "skipped" << endl;
	}

	return 0;
}