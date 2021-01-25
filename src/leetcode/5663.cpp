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

int kthLargestValue(vector<vector<int>> &a, int k)
{
  int m = a.size(), n = a[0].size(), z = 0;
  int p[m * n];

  for (int i = 0; i < m; i++)
    for (int j = 1; j < n; j++)
      a[i][j] ^= a[i][j - 1];

  for (int i = 1; i < m; i++)
    for (int j = 0; j < n; j++)
      a[i][j] ^= a[i - 1][j];

  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      p[z++] = a[i][j];

  sort(p, p + m * n);
  return p[m * n - k];
}

void solve()
{
  int m, n, k, t;
  cin >> m >> n >> k;
  V<V<int>> matrix(m);

  RP(i, 0, m)
  {
    RP(j, 0, n)
    {
      cin >> t;
      matrix[i].PB(t);
    }
  }

  cout << kthLargestValue(matrix, k) << EL;
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
