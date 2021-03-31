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
  int n, t;
  cin >> n;

  V<int> v[3];
  RP(i, 0, n)
  {
    cin >> t;

    if (t < 0)
      v[0].push_back(t);
    else if (t > 0)
      v[1].push_back(t);
    else
      v[2].push_back(t);
  }

  if (v[1].size() <= 0)
  {
    RP(i, 0, 2)
    {
      int x = v[0][v[0].size() - 1];
      v[1].push_back(x);
      v[0].pop_back();
    }
  }

  if (v[0].size() % 2 == 0)
  {
    int x = v[0][v[0].size() - 1];
    v[2].push_back(x);
    v[0].pop_back();
  }

  RP(i, 0, 3)
  {
    cout << v[i].size() << " ";
    RPV(j, v[i])
    cout << *j << " ";
    cout << EL;
  }
}

int32_t main()
{
  FAST_CIN();
  solve();
  return 0;
}
