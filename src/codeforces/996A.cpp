#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
  int num = 0;
  int bills[] = {100, 20, 10, 5, 1};
  for (int i = 0; i < 5; i++)
  {
    num += n / bills[i];
    n %= bills[i];
  }
  return num;
}

int main()
{
  int n;
  cin >> n;
  cout << solution(n) << endl;
  return 0;
}
