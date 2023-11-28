#include <iostream>
#include <string>
#include <cctype>

using namespace std;

double name_value(string x)
{
	int res = 0;
	for(int i = 0; i < x.size(); i++)
	{
		x[i] = toupper(x[i]);
		if(x[i] >= 'A' && x[i] <= 'Z') res += x[i] - 'A' + 1;
	}

    //Almost magic (? not know when stops working)
    if(res % 9 == 0) return 9;
    else return res % 9;
}

int main(){
	string a, b;
	while(getline(cin, a))
	{
        getline(cin, b);
		printf("%.2f %\n", (double)min(name_value(a), name_value(b)) / max(name_value(a), name_value(b)) * 100);
	}

	return 0;
}