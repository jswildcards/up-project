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

void solve(int n, int ar[][3])
{
  int x = 0, y = 0, z = 0;
  RP(i, 0, n)
  {
    x += ar[i][0];
    y += ar[i][1];
    z += ar[i][2];
  }
  cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << EL;
}

int main()
{
  FAST_CIN();
  int n;
  cin >> n;

  int ar[n][3];
  RP(i, 0, n)
  cin >> ar[i][0] >> ar[i][1] >> ar[i][2];

  solve(n, ar);
  return 0;
}
