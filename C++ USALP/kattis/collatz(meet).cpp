#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	while (1)
	{
		long long int a, ai, b, bi, ma = 0, mb = 0, m = 0, sm = 0;

		cin >> a >> b;

		if (a == 0 && b == 0) break;

		ai = a, bi = b;


		//find iterations to get to 1 from both numbers
		while (ai != 1)
		{
			ai = (ai % 2) ? ai * 3 + 1 : ai /= 2;
			ma++;
		}

		while (bi != 1)
		{
			bi = (bi % 2) ? bi * 3 + 1 : bi /= 2;
			mb++;
		}

		ai = a;
		bi = b;

		int sa = ma, sb = mb;

		//set both numbers to be the same steps away from 1, the longest catches up to the shortest
		while (sa != sb)
		{
			if (sa > sb)
			{
				ai = (ai % 2) ? ai * 3 + 1 : ai /= 2;
				sa--;
			}
			else
			{
				bi = (bi % 2) ? bi * 3 + 1 : bi /= 2;
				sb--;
			}
		}

		//get both numbers to be the same, iteratios to get there is stored in m
		while (ai != bi)
		{

			ai = (ai % 2) ? ai * 3 + 1 : ai /= 2;
			bi = (bi % 2) ? bi * 3 + 1 : bi /= 2;

			m++;
		}



		// while (ai != bi) {

		// 	int& c = (ai % 2 == bi % 2) ? ((ai > bi) ? ai : bi) : ((ai % 2) ? ai : bi);
		// 	int& cs = (ai % 2 == bi % 2) ? ((ai > bi) ? sa : sb) : ((ai % 2) ? sa : sb);

		// 	cs += 1;
		// 	c = (c % 2) ? c * 3 + 1 : c /= 2;

		//m = ai;
		// }

		//create reference to variable to edit/compare
		//do respective operations

		cout << a << " needs " << ma - sa + m << " steps, " << b << " needs " << mb - sb + m << " steps, they meet at " << ai << endl;
	}
	cin.get();
}