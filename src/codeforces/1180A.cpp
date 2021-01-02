#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
  int base = n * 2 - 1;
  int sum = base;

  for (int i = base - 2; i > 0; i -= 2)
    sum += i * 2;

  return sum;
}

int main()
{
  int n;
  cin >> n;
  cout << solution(n) << endl;
  return 0;
}
