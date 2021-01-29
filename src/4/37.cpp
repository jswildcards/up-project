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

void solve()
{
  int a[8], m;
  RP(i, 0, 8)
  cin >> a[i];

  m = a[1] * a[2] / a[6] < a[3] * a[4] ? a[1] * a[2] / a[6] : a[3] * a[4];
  m = m < a[5] / a[7] ? m : a[5] / a[7];
  cout << (m / a[0]) << EL;
}

int32_t main()
{
  FAST_CIN();
  solve();
  return 0;
}
