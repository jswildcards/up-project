#include <bits/stdc++.h>
using namespace std;

int solution(int n, int k, int arr[])
{
  k -= 1;
  int result = k;

  if (arr[k] != 0)
  {
    for (int i = k; i < n; i++)
    {
      if (arr[i] != arr[k])
        break;
      result = i + 1;
    }
  }
  else
  {
    for (int i = k; i >= 0; i--)
    {
      if (arr[i] != 0)
        break;
      result = i;
    }
  }

  return result;
}

int main()
{
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << solution(n, k, arr) << "\n";
  return 0;
}
