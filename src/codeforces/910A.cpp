#include <bits/stdc++.h>
using namespace std;

int solution(int n, int d, int arr[])
{
  int result = 0;
  int step = 0;

  while (step < n)
  {
    for (int i = step + d; i >= step; i--)
    {
      if (i >= n - 1)
        return result + 1;
      if (i == step)
        return -1;
      if (arr[i] == 1)
      {
        result++;
        step = i;
        break;
      }
    }
  }

  return result;
}

int main()
{
  int n, d;
  string s;
  cin >> n >> d >> s;

  int arr[n];
  for (int i = 0; i < n; i++)
    arr[i] = s[i] - '0';

  cout << solution(n, d, arr) << endl;
  return 0;
}
