#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int total = r + g + b + w;
		int maxUneven = (total % 2 == 0) ? 0 : 1;

		string ans = "No";
		while (true)
		{
			int uneven = 0;
			if (r % 2 == 1)
				uneven++;
			if (g % 2 == 1)
				uneven++;
			if (b % 2 == 1)
				uneven++;
			if (w % 2 == 1)
				uneven++;

			if (uneven <= maxUneven)
			{
				ans = "Yes";
				break;
			}

			r -= 1;
			g -= 1;
			b -= 1;
			w += 3;
			if (r <= 0 && g <= 0 && b <= 0)
				break;
		}
		cout << ans << endl;
	}
}