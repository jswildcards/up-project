#include <bits/stdc++.h>
using namespace std;

double solution(int x, double y)
{
  return x % 5 == 0 && x + 0.5 <= y ? y - x - 0.5 : y;
}

int main()
{
  int x;
  double y;
  cin >> x >> y;
  printf("%.2f\n", solution(x, y));
  return 0;
}
