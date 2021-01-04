#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define LL long long
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
#define RP(i, a, n) for (LL i = a; i < (n); i++)
#define RPI(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define STEP(i, a, n, s) for (LL i = a; i < (n); i += s)
#define FAST_CIN()         \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)
using namespace std;

void solve()
{
  int g = 101001;
  bool p[g];
  RP(i, 0, g)
  p[i] = true;

  p[0] = p[1] = false;
  RP(i, 0, sqrt(g) + 1)
  {
    if (p[i] == true)
    {
      STEP(j, i + i, g, i)
      p[j] = false;
    }
  }

  int n, m, t, s, z = 99999999;
  cin >> n >> m;

  int r[n], c[m];
  RP(i, 0, n)
  r[i] = 0;
  RP(i, 0, m)
  c[i] = 0;

  RP(i, 0, n)
  {
    RP(j, 0, m)
    {
      cin >> t;
      s = t;
      while (p[s] == false)
        s++;
      r[i] += s - t;
      c[j] += s - t;
    }
  }

  RP(i, 0, n)
  z = z < r[i] ? z : r[i];
  RP(i, 0, m)
  z = z < c[i] ? z : c[i];

  cout << z << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
