// M. Replace MinMax

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int arr[n];

	int mn = INT_MAX;
	int mn_i = 0;
	int mx = INT_MIN;
	int mx_i = 0;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		if (k > mx)
		{
			mx = k;
			mx_i = i;
		}
		if (k < mn)
		{
			mn = k;
			mn_i = i;
		}
		arr[i] = k;
	}

	// cout << mx_i << " " << mn_i;

	int temp = arr[mx_i];
	arr[mx_i] = arr[mn_i];
	arr[mn_i] = temp;

	cout << arr[0];
	for (int i = 1; i < n; i++)
	{
		cout << " " << arr[i];
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);

#endif
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int T = 1;
	// cin >> T;

	while (T--)
	{
		solve();
	}
}
