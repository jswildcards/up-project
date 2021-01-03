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
#define FAST_CIN()         \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)
using namespace std;

void solve(int ar[4][4])
{
  RP(i, 0, 3)
  {
    RP(j, 0, 3)
    {
      if (ar[i][j] + ar[i + 1][j] + ar[i][j + 1] + ar[i + 1][j + 1] != 0)
      {
        cout << "YES" << EL;
        return;
      }
    }
  }

  cout << "NO" << EL;
}

int main()
{
  FAST_CIN();
  int ar[4][4];
  char a;

  RP(i, 0, 4)
  {
    RP(j, 0, 4)
    {
      cin >> a;
      ar[i][j] = a == '#' ? 1 : -1;
    }
  }

  solve(ar);
  return 0;
}
