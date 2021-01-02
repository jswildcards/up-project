#include <bits/stdc++.h>
using namespace std;

int solution(int n, int before[], int after[])
{
  sort(before, before + n);
  sort(after, after + n - 1);

  for (int i = 0; i < n - 1; i++)
  {
    if (before[i] != after[i])
      return before[i];
  }

  return before[n - 1];
}

int main()
{
  int n;
  cin >> n;

  int arr[3][n];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < n - i; j++)
      cin >> arr[i][j];
  }

  cout << solution(n, arr[0], arr[1]) << endl
       << solution(n - 1, arr[1], arr[2]) << endl;
  return 0;
}
