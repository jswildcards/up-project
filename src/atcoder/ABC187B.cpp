#include <bits/stdc++.h>
using namespace std;

int solution(int n, int arr[][2])
{
  int result = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      double slope = (double)(arr[i][1] - arr[j][1]) / (arr[i][0] - arr[j][0]);
      if (-1 <= slope && slope <= 1)
        result++;
    }
  }

  return result;
}

int main()
{
  int n;
  cin >> n;

  int arr[n][2];
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1];

  cout << solution(n, arr) << endl;
  return 0;
}
