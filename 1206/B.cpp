#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long t = 0;
	int negativeNumbers = 0;
	int zeros = 0;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;

		if (x < 0)
		{
			t += -1 - x;
			negativeNumbers++;
		}
		else if (x > 0)
			t += x - 1;
		else
			zeros++;
	}

	if (zeros > 0)
		t += zeros;
	else if (negativeNumbers % 2 != 0)
		t += 2;

	cout << t << endl;
	return 0;
}