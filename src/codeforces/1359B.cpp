#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m, int x, int y, string arr[])
{
  int result = 0, c = 0;

  for (int i = 0; i < n; i++)
  {
    c = 0;

    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == '*')
      {
        result += x * 2 < y ? x * c : y * (c / 2) + x * (c % 2);
        c = 0;
      }
      else
        c++;
    }

    result += x * 2 < y ? x * c : y * (c / 2) + x * (c % 2);
  }

  return result;
}

int main()
{
  int t, n, m, x, y;
  cin >> t;

  int result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> n >> m >> x >> y;
    string arr[n];
    for (int j = 0; j < n; j++)
      cin >> arr[j];
    result[i] = solution(n, m, x, y, arr);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
