#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;

	int t = 0;
	for (int i = 1; i <= w; i++)
	{
		t += k * i;
	}

	int d = t - n;

	if (d < 0)
		cout << 0;
	else
		cout << d;
}