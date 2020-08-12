#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		vector<string> conveyer;
		for (int i = 0; i < n; i++)
		{
			string x;
			cin >> x;
			conveyer.push_back(x);
		}

		int ans = 0;
		for (int i = 0; i < conveyer.size(); i++)
		{
			string row = conveyer[i];
			if (i == conveyer.size() - 1)
			{
				for (char x : row)
				{
					if (x == 'D')
						ans++;
				}
			}
			else
			{
				if (row[row.size() - 1] == 'R')
					ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}