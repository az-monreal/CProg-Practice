#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n;
	cin >> n;

	while (n > 1) {
		cout << n << " ";
		n = (n % 2) ? n * 3 + 1 : n / 2;
	}
	cout << n;
	return 0;
}