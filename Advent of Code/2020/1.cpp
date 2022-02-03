#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> in;

	freopen("1.in", "r", stdin);

	int x;
	while (cin >> x)
	{
		in.push_back(x);
	}

	sort(in.begin(), in.end());

	for (int i = 0; i < in.size(); i++)
	{
		for (int j = i + 1; j < in.size(); j++)
		{
			for (int k = j + 1; k < in.size(); k++)
			{
				if (in[i] + in[j] + in[k] == 2020)
				{
					cout << in[i] << ' ' << in[j] << ' ' << in[k] << '\n';
					cout << in[i] * in[j] * in[k];
				}

				if (in[i] + in[j] + in[k] > 2020)
				{
					break;
				}
			}
			if (in[i] + in[j] > 2020)
			{
				break;
			}

		}

	}

}