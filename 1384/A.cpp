#include <bits/stdc++.h>
using namespace std;

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int> a;
		for (int j = 0; j < n; j++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		a.push_back(0);

		string previousS = string(a[0] + 1, 'a');
		cout << previousS << endl;
		for (int j = 0; j < a.size() - 1; j++)
		{
			if (a[j] == 0)
			{
				char filler = (previousS.substr(0, 1) == "a") ? 'b' : 'a';

				string s = string(a[j + 1] + 1, filler);

				cout << s << endl;
				previousS = s;
			}
			else
			{
				string s = previousS.substr(0, a[j]);
				char filler = (previousS.substr(a[j], 1) == "a") ? 'b' : 'a';
				s += string(a[j + 1], filler);

				cout << s << endl;
				previousS = s;
			}
		}
	}
	return 0;
}