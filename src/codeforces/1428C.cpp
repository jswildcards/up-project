#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
  stack<char> q;
  for (char c : s)
  {
    if (c == 'A' || q.size() <= 0)
      q.push(c);
    else
      q.pop();
  }
  return q.size();
}

int main()
{
  int t;
  string s;
  cin >> t;

  int result[t];
  for (int i = 0; i < t; i++)
  {
    cin >> s;
    result[i] = solution(s);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
