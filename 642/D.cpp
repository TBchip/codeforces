#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; j++)
		{
			int l = 0;
			int r = 0;
			int curL = 0;
			int maxSubLength = 0;
			int currentSubLength = 0;
			bool firstZero = true;
			for (int k = 0; k < n; k++)
			{
				if (a[k] == 0)
				{
					if (firstZero)
					{
						firstZero = false;
						curL = k;
					}
					currentSubLength += 1;
				}
				if (a[k] != 0)
				{
					if (currentSubLength > maxSubLength)
					{
						l = curL;
						r = k - 1;
						maxSubLength = currentSubLength;
						currentSubLength = 0;
						firstZero = true;
					}
				}
				else if (k == n - 1)
				{
					if (currentSubLength > maxSubLength)
					{
						l = curL;
						r = k;
						maxSubLength = currentSubLength;
						currentSubLength = 0;
						firstZero = true;
					}
				}
			}
			if ((r - l) % 2 == 0)
				a[(l + r) / 2] = j + 1;
			else
				a[(l + r - 1) / 2] = j + 1;
		}
		for (int j : a)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}