# test1

#include <iostream>
#include <sstream>

using namespace std;


int main()
{
	char s[80];
	
	cin.getline(s,80);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ')	cout << "%20";
		else cout << s[i];
	}


	cin.get();
	cin.get();
    return 0;
}

