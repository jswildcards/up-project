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

void solve(int y)
{
  bool f = true;
  int x1, x2, x3, x4;
  while (f)
  {
    f = false;
    y += 1;
    x1 = y / 1000;
    x2 = y % 1000 / 100;
    x3 = y % 1000 % 100 / 10;
    x4 = y % 1000 % 100 % 10;

    f = x1 == x2 || x1 == x3 || x1 == x4 || x2 == x3 || x2 == x4 || x3 == x4;
  }
  cout << y << EL;
}

int main()
{
  FAST_CIN();
  int n;
  cin >> n;
  solve(n);
  return 0;
}
