#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	cin >> n;

	list<string> words;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		words.push_back(input);
	}

	for (string i : words)
	{
		if (i.size() > 10)
		{
			string output = "";
			output.append(i, 0, 1);
			output.append(to_string(i.size() - 2));
			output.append(i, i.size() - 1, 1);
			cout << output << endl;
		}
		else
			cout << i << endl;
	}

	return 0;
}