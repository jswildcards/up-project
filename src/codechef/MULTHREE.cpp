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
  LL k, d0, d1;
  cin >> k >> d0 >> d1;
  LL r = d0 + d1;
  LL q[4] = {4, 8, 6, 2};

  if (k >= 3)
    r += r % 10;
  if (k >= 4)
    r += r % 10;

  k -= 4;
  if (k > 0)
  {
    RP(i, 0, 4)
    r += (q[i] * (d0 + d1) % 10) * (k / 4 + (i < k % 4 ? 1 : 0));
  }

  cout << (r % 3 == 0 ? "YES" : "NO") << EL;
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
