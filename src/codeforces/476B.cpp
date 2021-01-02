#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
  return n == 1 || n == 0 ? 1 : f(n - 1) * n;
}

int ncr(int n, int r)
{
  return f(n) / (f(r) * f(n - r));
}

double solution(string a, string b)
{
  int c = 0, d = 0, q = 0;

  for (int i = 0; i < a.length(); i++)
    c += a[i] == '+' ? 1 : -1;

  for (int i = 0; i < b.length(); i++)
  {
    if (b[i] == '?')
      q++;
    else
      d += b[i] == '+' ? 1 : -1;
  }

  if (q <= 0)
    return c == d ? 1 : 0;

  int diff = abs(c - d);

  if (q < diff || (q - diff) % 2 == 1)
    return 0;

  return ncr(q, (q + diff) / 2) / pow(2, q);
}

int main()
{
  string a, b;
  cin >> a >> b;
  printf("%.12f\n", solution(a, b));
  return 0;
}
