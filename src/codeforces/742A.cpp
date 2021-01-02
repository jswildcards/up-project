#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
  int map[4] = {6, 8, 4, 2};
  return n == 0 ? 1 : map[n % 4];
}

int main()
{
  int n;
  cin >> n;
  cout << solution(n) << "\n";
  return 0;
}
