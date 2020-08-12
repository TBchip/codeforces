#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin >> t;

	vector<int> nums;
	for (int i = 0; i < t; i++)
	{
		int numIn;
		cin >> numIn;

		nums.push_back(numIn);
	}

	vector<vector<int>> output;

	for (int i : nums)
	{
		string numstr = to_string(i);
		reverse(numstr.begin(), numstr.end());

		vector<int> roundNumOutput;
		for (int j = 0; j < numstr.length(); j++)
		{
			int roundNum = numstr[j] - '0';
			if (roundNum == 0)
			{
				continue;
			}
			if (j != 0)
			{
				roundNumOutput.push_back(roundNum * (10 * j));
			}
			else
			{
				roundNumOutput.push_back(roundNum);
			}
		}
		output.push_back(roundNumOutput);
	}

	for (vector<int> i : output)
	{
		cout << i.size() << endl;
		for (int j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}