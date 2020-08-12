#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t;
	string s;
	cin >> n >> t >> s;

	for (int _ = 0; _ < t; _++)
	{
		string x = s;
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				x[i] = 'G';
				x[i + 1] = 'B';
			}
		}
		s = x;
	}

	cout << s << endl;
	return 0;
}