#include <bits/stdc++.h>
using namespace std;

string solution(int n, string arr[])
{
  unordered_set<string> s;

  for (int i = 0; i < n; i++)
  {
    string search = arr[i][0] == '!' ? arr[i].substr(1) : ('!' + arr[i]);
    if (s.find(search) != s.end())
      return arr[i].length() > search.length() ? search : arr[i];
    s.insert(arr[i]);
  }

  return "satisfiable";
}

int main()
{
  int n;
  cin >> n;

  string arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << solution(n, arr) << endl;
  return 0;
}
