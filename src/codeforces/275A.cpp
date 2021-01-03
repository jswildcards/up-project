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

void solve(int ar[3][3])
{
  int sum[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  RP(i, 0, 3)
  {
    RP(j, 0, 3)
    {
      sum[i][j] += ar[i][j] + (i < 2 ? ar[i + 1][j] : 0) + (j < 2 ? ar[i][j + 1] : 0);
      if (i < 2)
        sum[i + 1][j] += ar[i][j];
      if (j < 2)
        sum[i][j + 1] += ar[i][j];
    }
  }

  RP(i, 0, 3)
  {
    RP(j, 0, 3)
    cout << (sum[i][j] % 2 == 0 ? 1 : 0);
    cout << EL;
  }
}

int main()
{
  FAST_CIN();
  int ar[3][3];

  RP(i, 0, 3)
  {
    RP(j, 0, 3)
    cin >> ar[i][j];
  }

  solve(ar);
  return 0;
}
