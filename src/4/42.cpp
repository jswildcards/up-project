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
  int n;
  cin >> n;
  char x = '\0', o = '\0', c;

  RP(i, 0, n)
  {
    RP(j, 0, n)
    {
      cin >> c;

      if (j == i || j == (n - 1 - i))
      {
        if (x != '\0')
        {
          if (x != c)
          {
            cout << "NO" << EL;
            return;
          }
        }
        else if (c == o)
        {
          cout << "NO" << EL;
          return;
        }
        else
          x = c;
      }
      else
      {
        if (o != '\0')
        {
          if (o != c)
          {
            cout << "NO" << EL;
            return;
          }
        }
        else if (c == x)
        {
          cout << "NO" << EL;
          return;
        }
        else
          o = c;
      }
    }
  }

  cout << "YES" << EL;
}

int32_t main()
{
  FAST_CIN();
  solve();
  return 0;
}
