// #include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int costs[26] = {0};

// int cost(char c)
// {
//   return costs[c - 'a'];
// }

// int cost_diff(char a, char b)
// {
//   return abs(cost(a) - cost(b));
// }

// char min_cost_character(char a, char b)
// {

//   int costA = cost(a);
//   int costB = cost(b);

//   int mn = min({costA, costB});
//   int mx = max({costA, costB});

//   int min = 26;

//   for (int i = 0; i < 26; i++)
//   {
//     if (costs[i] <= mx && costs[i] >= mn)
//     {
//       if (i < min)
//       {
//         min = i;
//       }
//     }
//   }

//   return (char)(min + 'a');
// }

// int main()
// {
//   string s;
//   cin >> s;

//   // input cost and calc the min cost
//   int min_cost = INT_MAX;
//   for (int i = 0; i < 26; i++)
//   {
//     int z;
//     cin >> z;
//     costs[i] = z;
//     if (z < min_cost)
//     {
//       min_cost = z;
//     }
//   }

//   // calc if ????

//   int isAllQ = count(s.begin(), s.end(), '?');
//   int n = s.size();

//   // handle ????
//   if (isAllQ == n)
//   {
//     cout << 0 << endl;
//     for (int i = 0; i < isAllQ; i++)
//     {
//       cout << 'a';
//     }
//     return 0;
//   }

//   int right, left;
//   bool first_occur = true;

//   for (int i = 1; i < n; i++)
//   {
//     // handle aa????
//     if (i == n - 1 && s[n - 1] == '?')
//     {
//       // handle aaa????
//       if (s[i - 1] == '?')
//       {
//         left = n - 1;
//         char rightChar = s[right - 1];
//         char replacer = min_cost_character(rightChar, rightChar);
//         s.replace(right, left - right + 1, left - right + 1, replacer);
//       }
//       else
//       // handle aaaa?
//       {
//         s[n - 1] = min_cost_character(s[n - 2], s[n - 2]);
//       }
//       continue;
//     }

//   // handle ??aa
//     if (i == 1 && s[0] == '?')
//     {
//       right = 0;
//       first_occur = false;
//     }


//     // handle x?x
//     if (first_occur)
//     {
//       if (s[i] == '?')
//       {
//         first_occur = false;
//         right = i;
//       }
//     }
//     else
//     {
//       if (s[i] != '?')
//       {
//         first_occur = true;
//         left = i - 1;
//         char rightChar = s[right - 1];
//         char leftChar = s[left + 1];
//         char replacer = min_cost_character(leftChar, rightChar);
//         for (int i = right; i <= left; i++)
//         {
//           s[i] = replacer;
//         }
//       }
//     }

//   }

//   int total_cost = 0;

//   // handle total cost
//   for (int i = 1; i < n; i++)
//   {
//     total_cost += cost_diff(s[i], s[i - 1]);
//   }

//   cout << total_cost << endl;
//   cout << s;

//   return 0;
// }
#include "bits/stdc++.h"
 
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
 
using namespace std;
 
typedef long long ll;
 
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
 
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
template <class T>
using pq = priority_queue<T>;
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;
 
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
 
template <class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
 
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void __print(int x) { cerr << x; }
 
void __print(long x) { cerr << x; }
 
void __print(long long x) { cerr << x; }
 
void __print(unsigned x) { cerr << x; }
 
void __print(unsigned long x) { cerr << x; }
 
void __print(unsigned long long x) { cerr << x; }
 
void __print(float x) { cerr << x; }
 
void __print(double x) { cerr << x; }
 
void __print(long double x) { cerr << x; }
 
void __print(char x) { cerr << '\'' << x << '\''; }
 
void __print(const char *x) { cerr << '\"' << x << '\"'; }
 
void __print(const string &x) { cerr << '\"' << x << '\"'; }
 
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
  cerr << '{';
  __print(x.first);
  cerr << ", ";
  __print(x.second);
  cerr << '}';
}
 
template <typename T>
void __print(const T &x)
{
  int f = 0;
  cerr << '{';
  for (auto &i : x)
    cerr << (f++ ? ", " : ""), __print(i);
  cerr << "}";
}
 
void _print() { cerr << "]\n"; }
 
template <typename T, typename... V>
void _print(T t, V... v)
{
  __print(t);
  if (sizeof...(v))
    cerr << ", ";
  _print(v...);
}
 
#ifndef DEBUG
#define dbg(x...)                                               \
  cerr << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; \
  _print(x);                                                    \
  cerr << endl;
#else
#define dbg(x...)
#endif
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