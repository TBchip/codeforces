#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	cin >> n;

	long long x[n];
	long long y[n];
	for (int i = 0; i < n; i++)
	{
		long long xIn;
		long long yIn;
		cin >> xIn >> yIn;

		x[i] = xIn;
		y[i] = yIn;
	}

	for (int i = 0; i < n; i++)
	{
		long long pieces = x[i] * y[i];

		long long edges = ((x[i] - 1) * y[i]) + ((x[i] - 1) * y[i]);

		if (edges > pieces)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}

	return 0;
}