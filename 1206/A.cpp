#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	vector<int> A, B;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		A.push_back(x);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		B.push_back(x);
	}

	int highestA = 0, highestB = 0;
	for (int a : A)
		if (a > highestA)
			highestA = a;
	for (int b : B)
		if (b > highestB)
			highestB = b;

	cout << highestA << " " << highestB << endl;

	return 0;
}