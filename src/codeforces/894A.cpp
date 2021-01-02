#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
  int q = 0;
  int sum = 0;
  vector<int> a;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'Q')
      q++;
    if (s[i] == 'A')
      a.push_back(q);
  }

  for (int i = 0; i < a.size(); i++)
    sum += a[i] == 0 || q - a[i] == 0 ? 0 : a[i] * (q - a[i]);

  return sum;
}

int main()
{
  string s;
  cin >> s;
  cout << solution(s) << endl;
  return 0;
}
