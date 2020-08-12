#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	string newA;
	string newB;
	for (int i = 0; i < a.length(); i++)
	{
		newA.push_back(tolower(a[i]));
		newB.push_back(tolower(b[i]));
	}
	a = newA;
	b = newB;

	if (a < b)
		cout << -1 << endl;
	else if (b < a)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}