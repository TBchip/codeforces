#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;

	vector<int> as;
	vector<int> bs;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;
		as.push_back(a);
		bs.push_back(b);
	}

	for (int i = 0; i < t; i++)
	{
		cout << as[i] + bs[i] << endl;
	}
}