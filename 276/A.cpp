#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int maxJoy = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int f, t;
		cin >> f >> t;

		int j = (k - t < 0) ? f - (t - k) : f;
		maxJoy = max(j, maxJoy);
	}

	cout << maxJoy << endl;

	return 0;
}