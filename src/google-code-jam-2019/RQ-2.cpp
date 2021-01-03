#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
  string result = "";
  for (int i = 0; i < s.length(); i++)
    result += s[i] == 'E' ? 'S' : 'E';
  return result;
}

int main()
{
  int t, n;
  string s;
  cin >> t;

  string result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> n >> s;
    result[i] = solution(s);
  }

  for (int i = 0; i < t; i++)
    cout << "Case #" << (i + 1) << ": " << result[i] << endl;
  return 0;
}
