#include <bits/stdc++.h>
using namespace std;

int solution(int n, int arr[][3])
{
  int result = 0;
  for (int i = 0; i < n; i++)
    result += (arr[i][0] + arr[i][1] + arr[i][2]) >= 2 ? 1 : 0;
  return result;
}

int main()
{
  int n;
  cin >> n;

  int arr[n][3];
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

  cout << solution(n, arr) << "\n";
  return 0;
}
