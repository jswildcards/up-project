#include <bits/stdc++.h>
using namespace std;

string solution(int n, int arr[])
{
  int size = n / 4;
  string s = "";
  for (int i = 0; i < size; i++)
  {
    int index = 0;
    for (int j = 0; j < 4; j++)
      index = index * 2 + arr[i * 4 + j];
    s += index + 'a';
  }
  return s;
}

int main()
{
  int t;
  cin >> t;

  string result[t];
  for (int i = 0; i < t; i++)
  {
    int n;
    string s;
    cin >> n >> s;
    int arr[n];
    for (int j = 0; j < n; j++)
      arr[j] = s[j] - '0';
    result[i] = solution(n, arr);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
