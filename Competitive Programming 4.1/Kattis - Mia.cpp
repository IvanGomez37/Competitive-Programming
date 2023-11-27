#include <iostream>

using namespace std;

int mia_mix(int a, int b)
{
	return (max(a, b) * 10) + min(a, b);
}

string mia_scoring(int a, int b, int x, int y)
{
	int pa = mia_mix(a, b), pb = mia_mix(x, y);
	if(pa == pb) return "Tie.";
	else if(pa == 21) return "Player 1 wins.";
	else if(pb == 21) return "Player 2 wins.";
    else if(a == b && x != y) return "Player 1 wins.";
    else if(x == y && a != b) return "Player 2 wins.";
    else if(pa > pb) return "Player 1 wins.";
    else return "Player 2 wins.";
}

int main(){
	int a, b, x, y;
	while(cin >> a >> b >> x >> y)
    {
        if(!a && !b && !x && !y) break;
        cout << mia_scoring(a, b, x, y) << endl;
    }
	return 0;
}