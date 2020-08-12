#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, k;
		cin >> n >> k;
		vector<int> a;
		vector<int> b;
		for (int i = 0; i < n; i++)
		{
			int in;
			cin >> in;
			a.push_back(in);
		}
		for (int i = 0; i < n; i++)
		{
			int in;
			cin >> in;
			b.push_back(in);
		}

		for (int i = 0; i < k; i++)
		{
			int lowestA = 31, highestB = 0;
			int lowestAIndex, highestBIndex;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < lowestA)
				{
					lowestA = a[i];
					lowestAIndex = i;
				}
				if (b[i] > highestB)
				{
					highestB = b[i];
					highestBIndex = i;
				}
			}
			if (lowestA < highestB)
			{
				a[lowestAIndex] = highestB;
				b[highestBIndex] = lowestA;
			}
		}

		int ans = 0;
		for (int i : a)
		{
			ans += i;
		}
		cout << ans << endl;
	}

	return 0;
}