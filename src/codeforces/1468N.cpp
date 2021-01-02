#include <bits/stdc++.h>
using namespace std;

string solution(int c[3], int a[5])
{
  for (int j = 0; j < 3; j++)
    c[j] -= a[j];

  if (c[0] > 0)
  {
    if (c[0] < a[3])
    {
      a[3] -= c[0];
      c[0] -= c[0];
    }
    else
    {
      a[3] -= a[3];
      c[0] -= a[3];
    }
  }

  if (c[1] > 0)
  {
    if (c[1] < a[4])
    {
      a[4] -= c[1];
      c[1] -= c[1];
    }
    else
    {
      a[4] -= a[4];
      c[1] -= a[4];
    }
  }

  c[2] -= a[3] + a[4];

  bool o = true;
  for (int j = 0; j < 3; j++)
  {
    if (c[j] < 0)
      o = false;
  }

  return o ? "YES" : "NO";
}

int main()
{
  int t, c[3], a[5];
  cin >> t;

  string result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> c[0] >> c[1] >> c[2];
    for (int j = 0; j < 5; j++)
      cin >> a[j];
    result[i] = solution(c, a);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
