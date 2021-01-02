#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
  int l = s.size();

  if (l > 10)
    return s[0] + to_string(l - 2) + s[l - 1];
  else
    return s;
}

int main()
{
  int n;
  string s;
  cin >> n;

  string result[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    result[i] = solution(s);
  }

  for (int i = 0; i < n; i++)
    cout << result[i] << endl;
  return 0;
}
