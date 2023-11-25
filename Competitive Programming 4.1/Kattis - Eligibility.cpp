#include <iostream>
#include <string>

using namespace std;

int main(){
	int t, i = 1;
	cin >> t;

	string name, post, birth, course;
	while(t--)
	{
		cin >> name >> post >> birth >> course;
		if(stoi(post.substr(0, 4)) >= 2010) cout << name << " eligible" << endl;
		else if(stoi(birth.substr(0, 4)) >= 1991) cout << name << " eligible" << endl;
		else if(stoi(course) >= 41) cout << name << " ineligible" << endl;
		else cout << name << " coach petitions" << endl;
	}
	return 0;
}