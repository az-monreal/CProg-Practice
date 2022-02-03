#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("2.in", "r", stdin);

	char l;
	char hp, col;
	int low, high;
	string pas;

	int val = 0;

	while (cin >> low >> hp >> high >> l >> col >> pas)
	{
		// First Part	
		// int count = 0;
		// for (char c : pas)
		// 	if (c == l)
		// 		count++;
			
		// if (count >= low && count <= high)
		// 	val++;

		// Second Part
		if ((pas[low-1] == l) != (pas[high-1] == l))
			val++;

		
		
	}

	cout << val;
}