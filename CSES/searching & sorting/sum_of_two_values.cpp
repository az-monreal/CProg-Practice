#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/* **********

	int n, s;
	cin >> n >> s;

	pair<int, int> values[n];

	for (int i = 0; i < n;i++)
	{
		int in;
		cin >> in;
		values[i] = { in, i + 1 };
	}

	sort(values, values + n);

	int i = 0, j = n - 1;

	while (i < j)
	{
		if (values[i].first + values[j].first < s) i++;
		else if (values[i].first + values[j].first > s) j--;
		else if (values[i].first + values[j].first == s)
		{
			cout << values[i].second << " " << values[j].second;
			return 0;
		}

	}
	cout << "IMPOSSIBLE";

	********** */

	/* **********

	int n, x; cin >> n >> x;
	vector<int> a(n);
	map<int, int> vals;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if(vals.count(x - a[i])){
			cout << i + 1 << " " << vals[x - a[i]] << "\n";
			return 0;
		}
		vals[a[i]] = i + 1;
	}
	cout << "IMPOSSIBLE" << '\n';

	********** */

	// /* **********

	int n, x;
	map<int, int> mp;

	cin >> n >> x;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (mp.find(x - a) != mp.end()) {
			cout << i + 1 << " " << mp[x - a] + 1;
			return 0;
		}
		mp[a] = i;
	}

	cout << "IMPOSSIBLE";


	// ********** */
}