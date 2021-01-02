#include <bits/stdc++.h>
using namespace std;

int solution(int n, int arr[])
{
  int result = 1;
  int current = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i - 1] < arr[i])
    {
      current++;
      result = result > current ? result : current;
    }
    else
    {
      result = result > current ? result : current;
      current = 1;
    }
  }
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
