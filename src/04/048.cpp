#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define LEN length()
#define V vector
#define PQ priority_queue
#define PQI PQ<int>
#define PQIR PQ<int, V<int>, greater<int>>
#define PB push_back
#define EL '\n'
#define GSTYL(i) cout << "Case #" << i << ": "
#define RP(i, a, n) for (int i = a; i < (n); i++)
#define RPV(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define STEP(i, a, n, s) for (int i = a; i < (n); i += s)
#define FAST_CIN()         \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)
using namespace std;

int a[3];
map<int, int> m;

int dp(int n)
{
  if (n <= 0)
    return n;

  if (m.count(n) > 0)
    return m[n];

  int d = -a[0] - a[1] - a[2];
  RP(i, 0, 3)
  {
    int e = dp(n - a[i]);
    d = max(d, e < 0 ? e : e + 1);
  }

  m[n] = d;
  return m[n];
}

void solve()
{
  int n;
  cin >> n >> a[0] >> a[1] >> a[2];
  cout << dp(n) << EL;
}

int32_t main()
{
  FAST_CIN();
  solve();
  return 0;
}
