// Min Cost String

#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

ll costs[26] = {0};

ll cost(char c)
{
	return costs[c - 'a'];
}

ll cost_diff(char a, char b)
{
	return abs(cost(a) - cost(b));
}

char min_cost_character(char a, char b)
{

	ll costA = cost(a);
	ll costB = cost(b);

	ll mn = min({costA, costB});
	ll mx = max({costA, costB});

	ll min = 26;

	for (int i = 0; i < 26; i++)
	{
		if (costs[i] <= mx && costs[i] >= mn)
		{
			return (char)(i + 'a');
		}
	}
}

void solve()
{
	string s;
	cin >> s;

	// input cost and calc the min cost
	for (int i = 0; i < 26; i++)
	{
		ll z;
		cin >> z;
		costs[i] = z;
	}

	// calc if ????

	ll isAllQ = count(s.begin(), s.end(), '?');
	ll n = s.size();

	// handle ????
	if (isAllQ == n)
	{
		cout << 0 << endl;
		for (int i = 0; i < isAllQ; i++)
		{
			cout << 'a';
		}
		return;
	}

	int left = -1;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == '?')
		{
			continue;
		}
		// ???????bb
		if (left == -1 && i)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				s[j] = min_cost_character(s[i], s[i]);
			}
			left = i;
			continue;
		}
		// aa??aa
		for (int j = left + 1; j < i; j++)
		{
			s[j] = min_cost_character(s[left], s[i]);
		}
		left = i;
	}
	for (int i = left + 1; i < n; i++)
	{
		s[i] = min_cost_character(s[left], s[left]);
	}

	ll total_cost = 0;

	// handle total cost
	for (int i = 1; i < n; i++)
	{
		total_cost += cost_diff(s[i], s[i - 1]);
	}

	cout << total_cost << endl;
	cout << s;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout),
			freopen("deb.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int T = 1;
	// cin >> T;
	while (T--)
	{
		solve();
	}
}

/**
 *
 *
 *
 *
 *
 * ? ? i+1 , i-1 , i




 *
 * cost[a]=0
 * cost[b]=10^5
 *
 * ababababababababababab
 * (n-1)*10^5
 *
 *
 */