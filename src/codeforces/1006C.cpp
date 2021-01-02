#include <bits/stdc++.h>
using namespace std;

long long solution(int n, int arr[])
{
  long long i = 0, j = n - 1;
  long long left = 0, right = 0, result = 0;

  while (i <= j)
  {
    if (left == right)
    {
      result = left;
      if (i < j)
      {
        left += arr[i];
        right += arr[j];
      }
      i++;
      j--;
    }
    else if (left < right)
      left += arr[i++];
    else
      right += arr[j--];
  }

  if (left == right)
    result = left;

  return result;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << solution(n, arr) << endl;
  return 0;
}
