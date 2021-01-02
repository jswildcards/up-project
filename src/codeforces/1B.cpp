#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
  string temp[] = {"", "", "", ""};

  for (int j = 0; j < s.length(); j++)
  {
    char c = s[j];
    if (c >= '0' && c <= '9')
      temp[temp[2].length() > 0 ? 3 : 1] += c;
    else
      temp[temp[1].length() > 0 ? 2 : 0] += c;
  }

  if (temp[3].length() > 0)
  {
    string row = temp[1];
    string column = "";
    int dividend = stoi(temp[3]);
    while (dividend > 0)
    {
      int remainder = dividend % 26;
      char lead = remainder == 0 ? 'Z' : remainder - 1 + 'A';
      column = lead + column;
      dividend /= 26;
      if (remainder == 0)
        dividend--;
    }
    return column + row;
  }
  else
  {
    string row = temp[1];
    int column = 0;
    for (int j = 0; j < temp[0].length(); j++)
      column = column * 26 + (temp[0][j] - 'A') + 1;
    return "R" + row + "C" + to_string(column);
  }
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
