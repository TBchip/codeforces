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
		n /= 2;
		n += 1;

		long long ans = 0;
		long long j = 0;
		while (j < n)
		{
			long long k = j * j;
			k = 8 * k;
			k = ans + k;
			ans = k;
			j++;
		}
		cout << ans << endl;
	}

	return 0;
}