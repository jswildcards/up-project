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
#define RP(i, a, n) for (LL i = a; i < (LL)(n); i++)
#define RPI(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define STEP(i, a, n, s) for (LL i = a; i < (LL)(n); i += s)
#define FAST_CIN()         \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)
using namespace std;

void solve()
{
  int n, a[26];
  string s;
  cin >> n >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);

  RP(i, 0, 26)
  a[i] = 0;

  RP(i, 0, n)
  a[(s[i] - 'a')]++;

  RP(i, 0, 26)
  {
    if (a[i] <= 0)
    {
      cout << "NO" << EL;
      return;
    }
  }

  cout << "YES" << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
