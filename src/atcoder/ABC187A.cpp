#include <bits/stdc++.h>
using namespace std;

int solution(string m, string n)
{
  int a = 0, b = 0;
  for (int i = 0; i < 3; i++)
  {
    a += m[i] - '0';
    b += n[i] - '0';
  }
  return a > b ? a : b;
}

int main()
{
  string m, n;
  cin >> m >> n;
  cout << solution(m, n) << endl;
  return 0;
}
