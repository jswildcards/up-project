#include <bits/stdc++.h>
using namespace std;

string solution(int n)
{
  return n > 2 && n % 2 == 0 ? "YES" : "NO";
}

int main()
{
  int n;
  cin >> n;
  cout << solution(n) << "\n";
  return 0;
}
