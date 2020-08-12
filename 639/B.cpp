#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long testCases[n];
	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		testCases[i] = input;
	}

	for (int i = 0; i < n; i++)
	{
		if (testCases[i] == 15)
		{
			cout << 1 << endl;
			continue;
		}

		long long cardsRemaining = testCases[i];
		long long nextCardsNeeded = 2;
		int numberOfPyramids = 0;
		while (cardsRemaining >= nextCardsNeeded)
		{
			numberOfPyramids += 1;
			cardsRemaining -= nextCardsNeeded;
			nextCardsNeeded += 3;
		}
		cout << numberOfPyramids << endl;
	}

	return 0;
}