#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	string s;
	int i = 1;

    map<string, string> word_language = {{"HELLO", "ENGLISH"}, {"HOLA", "SPANISH"}, {"HALLO", "GERMAN"}, {"BONJOUR", "FRENCH"}, {"CIAO", "ITALIAN"}, {"ZDRAVSTVUJTE", "RUSSIAN"}};


	while(cin >> s){
		if(s == "#") break;
    
        if(word_language.count(s)) cout << "Case " << i << ": " << word_language[s] << endl;
        else cout << "Case " << i << ": UNKNOWN" << endl;
		
		i++;
	}
	
	return 0;
}