#include <bits/stdc++.h>
using namespace std;

vector<string> solution(int n, string arr[])
{
  vector<string> result(n);
  map<string, int> db;

  for (int i = 0; i < n; i++)
  {
    if (db.count(arr[i]) > 0)
    {
      result[i] = arr[i] + to_string(db[arr[i]]);
      db[arr[i]]++;
    }
    else
    {
      result[i] = "OK";
      db[arr[i]] = 1;
    }
  }

  return result;
}

int main()
{
  int n;
  cin >> n;

  string arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<string> result = solution(n, arr);
  for (int i = 0; i < n; i++)
    cout << result[i] << endl;
  return 0;
}
