#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, string s)
{
  vector<int> rooms(10);

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'L')
    {
      for (int j = 0; j < rooms.size(); j++)
      {
        if (rooms[j] == 0)
        {
          rooms[j] = 1;
          break;
        }
      }
    }
    else if (s[i] == 'R')
    {
      for (int j = rooms.size() - 1; j >= 0; j--)
      {
        if (rooms[j] == 0)
        {
          rooms[j] = 1;
          break;
        }
      }
    }
    else
      rooms[s[i] - '0'] = 0;
  }

  return rooms;
}

int main()
{
  int n;
  string s;
  cin >> n >> s;

  vector<int> result = solution(n, s);
  for (int i = 0; i < result.size(); i++)
    cout << result[i];
  cout << endl;
  return 0;
}
