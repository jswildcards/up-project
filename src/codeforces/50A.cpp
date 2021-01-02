#include <bits/stdc++.h>
using namespace std;

int solution(int m, int n)
{
  return m * n / 2;
}

int main()
{
  int m, n;
  cin >> m >> n;
  cout << solution(m, n) << "\n";
  return 0;
}
