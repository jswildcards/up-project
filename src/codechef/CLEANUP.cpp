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

void solve()
{
  int n, m, t, r = 0;
  cin >> n >> m;

  PQLR a;
  V<int> q[2];
  RP(i, 0, m)
  {
    cin >> t;
    a.push(t);
  }

  RP(i, 1, n + 1)
  {
    if (a.size() > 0)
    {
      t = a.top();
      if (t != i)
        q[r++ % 2].PB(i);
      else
        a.pop();
    }
    else
      q[r++ % 2].PB(i);
  }

  RP(i, 0, 2)
  {
    RP(j, 0, q[i].size())
    cout << q[i][j] << " ";
    cout << EL;
  }
}

int main()
{
  FAST_CIN();
  int n;
  cin >> n;

  RP(i, 0, n)
  {
    solve();
  }
  return 0;
}
