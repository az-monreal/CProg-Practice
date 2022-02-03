#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int lengths[n] = { 0 };

	for (int& n : lengths)
		cin >> n;

	sort(lengths, lengths + n);

	int median = lengths[n / 2];
	long long cost = 0;

	for (int l : lengths)
		cost += abs(l - median);

	cout << cost;
}