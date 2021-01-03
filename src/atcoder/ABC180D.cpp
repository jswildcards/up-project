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

void solve(LL a, LL b, LL x, LL y)
{
  LL r = 0;

  while ((double)a * x <= 2e18 && a * x < b && a * x <= a + y)
  {
    a *= x;
    r++;
  }

  cout << r + (b - a - 1) / y << EL;
}

int main()
{
  FAST_CIN();
  LL a, b, x, y;
  cin >> a >> b >> x >> y;
  solve(a, b, x, y);
  return 0;
}
