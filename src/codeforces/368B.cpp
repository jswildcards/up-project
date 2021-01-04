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
  int n, m, z;
  set<int> s;
  cin >> n >> m;

  int ar[n];
  int l[n];
  RP(i, 0, n)
  cin >> ar[i];

  for (int i = n - 1; i >= 0; i--)
  {
    s.insert(ar[i]);
    l[i] = s.size();
  }

  RP(i, 0, m)
  {
    cin >> z;
    cout << l[z - 1] << EL;
  }
}

int main()
{
  FAST_CIN();
  solve();
  return 0;
}
