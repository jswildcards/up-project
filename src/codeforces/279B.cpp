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

int mbs(int ar[], int s, int e, int t)
{
  if (s == e)
    return ar[s] <= t ? s : -1;
  if (s < e)
  {
    int m = (s + e) / 2;
    if (ar[m] == t)
      return m;
    else if (ar[m] < t)
    {
      int r = mbs(ar, m + 1, e, t);
      return r < 0 ? m : r;
    }
    else
      return mbs(ar, s, m - 1, t);
  }
  return -1;
}

void solve(int n, int t, int ar[])
{
  int m = 0, sum[n];
  sum[0] = {ar[0]};

  RP(i, 1, n)
  sum[i] = sum[i - 1] + ar[i];

  RP(i, 0, n)
  {
    int f = mbs(sum, 0, n - 1, i == 0 ? t : sum[i - 1] + t) - i + 1;
    m = m >= f ? m : f;
  }

  cout << m << EL;
}

int main()
{
  FAST_CIN();
  int n, t;
  cin >> n >> t;

  int ar[n];
  RP(i, 0, n)
  cin >> ar[i];

  solve(n, t, ar);
  return 0;
}
