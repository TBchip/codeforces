#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<vector<int>> views;

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> in = {a, b, c};
		views.push_back(in);
	}

	int ans = 0;
	for (vector<int> i : views)
	{
		if (i[0] + i[1] + i[2] >= 2)
			ans++;
	}

	cout << ans;
}