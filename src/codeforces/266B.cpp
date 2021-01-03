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

// if swapped -< i++
void solve(int n, int t, char ar[])
{
  while (t-- > 0)
  {
    RP(i, 0, n - 1)
    {
      if (ar[i] == 'B' && ar[i + 1] == 'G')
      {
        ar[i] = 'G';
        ar[i + 1] = 'B';
        i++;
      }
    }
  }

  RP(i, 0, n)
  cout << ar[i];
  cout << EL;
}

int main()
{
  FAST_CIN();
  int n, t;
  cin >> n >> t;

  char ar[n];
  RP(i, 0, n)
  cin >> ar[i];

  solve(n, t, ar);
  return 0;
}
