#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("3.in", "r", stdin);

	string line;
	int x = 0, count = 0;

	while (cin >> line)
	{

		if (line[x] == '#')
			count++;

		x = (x+3) % line.size();

	}

	cout << count;

}