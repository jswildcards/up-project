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
  int max = 0, min = 0;
  RP(i, 1, n)
  {
    if (ar[i] > ar[max])
      max = i;
    if (ar[i] <= ar[min])
      min = i;
  }

  cout << ((n - 1 - min) + max + (max > min ? -1 : 0)) << EL;
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
