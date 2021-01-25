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
  int m, s;
  string r = "", t = "";
  cin >> m >> s;

  if (s <= 0)
  {
    r = m > 1 ? "-1 -1" : "0 0";
    cout << r << EL;
    return;
  }

  RP(i, 0, m)
  {
    if (s > 9)
    {
      r = "9" + r;
      t = t + "9";
      s -= 9;
    }
    else if (s <= 0)
    {
      t = t + "0";
      r = (i == m - 1 ? "1" : "0") + r;
    }
    else
    {
      t = t + to_string(s);
      r = to_string(s - (i == m - 1 ? 0 : 1)) + r;
      s = 0;
    }
  }

  if (s > 0)
    r = t = "-1";
  cout << r << " " << t << EL;
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
