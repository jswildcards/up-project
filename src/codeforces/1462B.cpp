#include <bits/stdc++.h>
using namespace std;

string solution(int n, string s)
{
  if (n < 4)
    return "NO";

  string chosen = "2020";
  int l = -1, r = 4;

  for (int i = 0; i < n; i++)
  {
    if (s[i] != chosen[l + 1])
      break;
    l++;
  }

  for (int i = n - 1; i > -1; i--)
  {
    if (r - 1 == l || s[i] != chosen[r - 1])
      break;
    r--;
  }

  return r - 1 == l ? "YES" : "NO";
}

int main()
{
  int t, n;
  cin >> t;

  string s;
  string result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> n >> s;
    result[i] = solution(n, s);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
