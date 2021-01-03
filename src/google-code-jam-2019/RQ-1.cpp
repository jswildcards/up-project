#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string s)
{
  string a = "", b = "";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '4')
    {
      a += '3';
      b += '1';
    }
    else
    {
      a += s[i];
      b += b == "" ? "" : "0";
    }
  }

  if (a == "")
    a = "0";

  if (b == "")
    b = "0";

  vector<string> result = {a, b};
  return result;
}

int main()
{
  int t;
  string s;
  cin >> t;

  vector<string> result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> s;
    result[i] = solution(s);
  }

  for (int i = 0; i < t; i++)
    cout << "Case #" << (i + 1) << ": " << result[i][0] << " " << result[i][1] << endl;
  return 0;
}
