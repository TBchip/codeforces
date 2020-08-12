#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int ans = 0;
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			int n;
			cin >> n;
			if (n == 1)
				ans = (abs(3 - i) + abs(3 - j));
		}
	}

	cout << ans << endl;

	return 0;
}

int main()
{
	solve();
	return 0;
}