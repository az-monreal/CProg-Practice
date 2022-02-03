#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	while (n) {
		float c, r, u;
		cin >> c >> r >> u;

		cout << floor(c / u) << " " << (r < ceil((c + r) / u)) ? (ceil((c + r) / u) - r) : 0;
		cout << "\n";

		n--;
	}
}