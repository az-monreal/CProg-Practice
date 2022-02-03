#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	/* ******************************
	// DID NOT WORK, ARRAY OF THAT SIZE CANT BE CREATED

	bool dis[100000000];
	int d = 0;

	while(n)
	{
		int in;
		cin >> in;

		if(!dis[n]) {
			dis[n] = true;
			d++;
		}

		n--;
	}

	cout << d;

	****************************** */

	/* ******************************
	//  ALGORITHM WORKS, EDGE CASES TAKE TO LONG, AFTER EACH INPUT LOOK FOR DUPLICATES AND ADD VALUE TO LIST OF UNIQUES

	vector<int> dis;
	int d = 0;

	while(n)
	{
		int in;
		cin >> in;

		if(find(dis.begin(), dis.end(), in) == dis.end())
		{
			d++;
			dis.push_back(in);
		}

		n--;
	}

	cout << d;

	****************************** */

	/* ******************************
	// SAME STRUCTURE AS BEFORE, INSTEAD OF CHECKING ON THE LOOP, THE DISTINCT VALUES ARE CHECKED AFTER ALL THE DATA IS SORTED

	vector<int> dis;
	int d = 1;

	for(int i = 0; i < n; i++)
	{
		int in;
		cin >> in;

		dis.push_back(in);
	}

	sort(dis.begin(), dis.end());

	for(int i = 1; i < n; i++)
	{
		d += (dis[i] != dis[i -1]);
	}

	cout << d;

	****************************** */

	// /* ******************************
	// SET DATA STRUCTURE ONLY CONTAINS UNIQUE VALUES, ADD EACH INPUT TO THE SET AND GET ITS FINAL SIZE

	set<int> distinct;

	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;

		distinct.insert(in);
	}

	cout << distinct.size();

	// ****************************** */

	/* ******************************
	// SAME. ADD ALL VALUES TO A VECTOR, SORT AND COUNT UNIQUES

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int ans = 1;
	for (int i = 1; i < n; i++) {

		//   if the current number is different from the previous
		//   it is a distinct number so we add 1 to the answer

		ans += (arr[i] != arr[i - 1]);
	}
	cout << ans << endl;

	****************************** */

}