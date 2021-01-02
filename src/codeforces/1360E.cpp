#include <bits/stdc++.h>
using namespace std;

string solution(int n, vector<vector<int>> arr)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[i][j] == 1 && arr[i + 1][j] == 0 && arr[i][j + 1] == 0)
        return "NO";
    }
  }
  return "YES";
}

int main()
{
  int t, n;
  cin >> t;

  string result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> n;
    vector<vector<int>> arr(n);
    string s;
    for (int j = 0; j < n; j++)
    {
      cin >> s;
      for (int k = 0; k < n; k++)
        arr[j].push_back(s[k] - '0');
    }
    result[i] = solution(n, arr);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
