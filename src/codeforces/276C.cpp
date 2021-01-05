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
  int n, m, l, r;
  LL s = 0;
  cin >> n >> m;

  LL a[n];
  LL c[n];
  RP(i, 0, n)
  {
    cin >> a[i];
    c[i] = 0;
  }

  RP(i, 0, m)
  {
    cin >> l >> r;
    c[l - 1]++;
    if (r < n)
      c[r]--;
  }

  RP(i, 1, n)
  c[i] += c[i - 1];

  sort(a, a + n);
  sort(c, c + n);

  RP(i, 0, n)
  s += a[i] * c[i];

  cout << s << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
