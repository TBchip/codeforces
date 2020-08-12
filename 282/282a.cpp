#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> statements;
	for (int i = 0; i < n; i++)
	{
		string in;
		cin >> in;
		statements.push_back(in);
	}

	int ans = 0;
	for (string i : statements)
	{
		char op;
		op = i[0];

		if (op == '+')
			ans++;
		else if (op == '-')
			ans--;
		else
		{
			op = i[i.size() - 1];
			if (op == '+')
				ans++;
			else if (op == '-')
				ans--;
		}
	}

	cout << ans;
}