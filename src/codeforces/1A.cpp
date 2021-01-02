#include <bits/stdc++.h>
using namespace std;

long long solution(double n, double m, double a)
{
  return ceil(n / a) * ceil(m / a);
}

int main()
{
  double n, m, a;
  cin >> n >> m >> a;
  cout << solution(n, m, a) << endl;
  return 0;
}
