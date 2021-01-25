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
  string s;
  cin >> s;

  if (s[0] == '?' && s[1] == '?')
  {
    s[0] = '2';
    s[1] = '3';
  }
  else if (s[0] == '?')
    s[0] = s[1] > '3' ? '1' : '2';
  else if (s[1] == '?')
    s[1] = s[0] < '2' ? '9' : '3';

  if (s[3] == '?')
    s[3] = '5';

  if (s[4] == '?')
    s[4] = '9';

  cout << s << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
