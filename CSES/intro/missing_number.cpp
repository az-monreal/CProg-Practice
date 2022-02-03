#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n, s = 0;

	cin >> n;

	for (long int i = 0; i < n - 1; i++) {
		int t;
		cin >> t;

		s += t;
	}

	int f = ((n + 1) * n * 0.5) - s;

	cout << f;
}