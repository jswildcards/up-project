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

void solve(int n, V<int> ar)
{
  int s = -1, e = -1;
  RP(i, 0, n - 1)
  {
    if (ar[i] > ar[i + 1])
    {
      if (e > -1)
      {
        cout << "no" << EL;
        return;
      }
      if (s < 0)
        s = i;
    }
    else
    {
      if (s > -1 && e < 0)
        e = i + 1;
    }
  }
  if (e < 0)
    e = n;
  if (s < 0)
  {
    cout << "yes" << EL << "1 1" << EL;
    return;
  }
  reverse(ar.begin() + s, ar.begin() + e);
  RP(i, 0, n - 1)
  {
    if (ar[i] > ar[i + 1])
    {
      cout << "no" << EL;
      return;
    }
  }
  cout << "yes" << EL << s + 1 << " " << e << EL;
}

int main()
{
  FAST_CIN();
  int n;
  cin >> n;

  V<int> ar(n);
  RP(i, 0, n)
  cin >> ar[i];

  solve(n, ar);
  return 0;
}
