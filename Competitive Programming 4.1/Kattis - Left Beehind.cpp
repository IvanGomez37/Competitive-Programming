#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sweet, sour;
    int sw, so;
    while(cin >> sweet >> sour)
    {
        if(sweet == "0" && sour == "0") break;
        
        sw = stoi(sweet);
        so = stoi(sour);
        if(sw + so == 13) cout << "Never speak again." << endl;
        else if(sw > so) cout << "To the convention." << endl;
        else if(sw < so) cout << "Left beehind." << endl;
        else cout << "Undecided." << endl;
    }

    return 0;
}