#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> scores;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		scores.push_back(a);
	}

	int kScore = scores[k - 1];

	int ans = 0;
	for (int i : scores)
	{
		if (i != 0 && i >= kScore)
			ans += 1;
	}

	cout << ans;

	return 0;
}