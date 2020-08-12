#include <bits/stdc++.h>
using namespace std;

string checkIfSquare(vector<int> rect1, vector<int> rect2)
{
	for (int i = 0; i < rect1.size(); i++)
	{
		if (rect1[i] == rect2[0] && rect1[1 - i] + rect2[1] == rect1[i])
		{
			return "YES";
		}
		else if (rect1[i] == rect2[1] && rect1[1 - i] + rect2[0] == rect1[i])
		{
			return "YES";
		}
	}

	return "NO";
}

int main()
{
	int t;
	cin >> t;

	vector<vector<int>> rect1;
	vector<vector<int>> rect2;
	for (int i = 0; i < t; i++)
	{
		int a, b, c, d;
		cin >> a >> b;
		cin >> c >> d;

		vector<int> inRect1;
		vector<int> inRect2;
		inRect1.push_back(a);
		inRect1.push_back(b);
		inRect2.push_back(c);
		inRect2.push_back(d);

		rect1.push_back(inRect1);
		rect2.push_back(inRect2);
	}

	for (int i = 0; i < t; i++)
	{
		cout << checkIfSquare(rect1[i], rect2[i]) << endl;
	}

	return 0;
}