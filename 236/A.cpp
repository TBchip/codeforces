#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<char> distChars;
	for(char i : s){
		bool found = false;
		for(char j : distChars)
			if(i == j)
				found = true;
		if(!found)
			distChars.push_back(i);
	}

	if(distChars.size() % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}