#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string in;
	cin >> in;

	char last;

	int sum, max = 0;

	for (char c : in)
	{
		if (c != last) sum = 0;

		sum++;
		if (sum > max) max = sum;

		last = c;
	}

	cout << max;
}