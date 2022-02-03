#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	string name[n];

	bool d = true, u = true;

	for (int i = 0; i < n; i++)
	{
		cin >> name[i];

		if (i == 0) continue;

		for (int j = 0; j <= name[i - 1].size(); j++)
		{
			if (name[i - 1] > name[i])
			{
				u = false;
				break;
			}
			else if (name[i - 1] < name[i])
			{
				d = false;
				break;
			}
		}
	}

	if (d && !u) cout << "DECREASING";
	else if (u && !d) cout << "INCREASING";
	else cout << "NEITHER";
}