#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int k, int x, int y)
{
  vector<int> corner = {n, n};
  if (x == y)
    return corner;

  vector<vector<int>> arr(4);

  if (x < y)
    arr = {{0, y - x}, {n - (y - x), n}, {n, n - (y - x)}, {y - x, 0}};
  else
    arr = {{x - y, 0}, {n, n - (x - y)}, {n - (x - y), n}, {0, x - y}};

  return arr[k % 4];
}

int main()
{
  int t;
  cin >> t;

  vector<int> result[t];
  for (int i = 0; i < t; i++)
  {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    result[i] = solution(n, k, x, y);
  }

  for (int i = 0; i < t; i++)
    cout << result[i][0] << " " << result[i][1] << endl;
  return 0;
}
