#include <bits/stdc++.h>
using namespace std;

int solution(int n, string arr[])
{
  int result = 0;
  for (int i = 0; i < n; i++)
    result += arr[i][1] == '+' ? 1 : -1;
  return result;
}

int main()
{
  int n;
  cin >> n;

  string arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << solution(n, arr) << "\n";
  return 0;
}
