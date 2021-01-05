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
  int n, k, r, z = 1;
  cin >> n >> k;

  int h[n];
  int s[n];
  RP(i, 0, n)
  {
    cin >> h[i];
    s[i] = h[i] + (i <= 0 ? 0 : s[i - 1]);
  }

  r = s[k - 1];
  RP(i, k, n)
  {
    bool b = r <= s[i] - s[i - k];
    z = b ? z : i - k + 2;
    r = b <= s[i] - s[i - k] ? r : s[i] - s[i - k];
  }

  cout << z << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
