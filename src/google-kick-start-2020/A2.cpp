#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define LL long long
#define LEN length()
#define Q queue
#define S stack
#define V vector
#define PQ priority_queue
#define PQL PQ<LL>
#define PQLR PQ<LL, V<LL>, greater<LL>>
#define PB push_back
#define FI first
#define SE second
#define EL '\n'
#define GSTYL(i) cout << "Case #" << i << ": "
#define RP(i, a, n) for (LL i = a; i < (LL)(n); i++)
#define RPI(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define STEP(i, a, n, s) for (LL i = a; i < (LL)(n); i += s)
#define FAST_CIN()         \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)
using namespace std;

int sp(int p, V<Q<int>> a, int b)
{
  if (b >= p)
    return 0;

  int m = -1, t;
  RP(i, 0, a.size())
  {
    if (a[i].size() <= 0)
      continue;
    V<Q<int>> c = a;
    t = c[i].front();
    c[i].pop();
    t += sp(p, c, b + 1);
    m = m > t ? m : t;
  }

  return m;
}

void solve()
{
  int n, k, p, t;
  cin >> n >> k >> p;

  V<Q<int>> a(n);
  RP(i, 0, n)
  {
    RP(j, 0, k)
    {
      cin >> t;
      a[i].push(t);
    }
  }

  cout << sp(p, a, 0) << EL;
}

int main()
{
  FAST_CIN();
  int n;
  cin >> n;

  RP(i, 0, n)
  {
    GSTYL(i + 1);
    solve();
  }
  return 0;
}
