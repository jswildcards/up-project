#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int arr[][2])
{
  vector<int> result(n);
  int maxW = arr[0][0] + arr[1][0],
      h1 = arr[0][1] > arr[1][1] ? arr[0][1] : arr[1][1],
      h2 = arr[0][1] > arr[1][1] ? arr[1][1] : arr[0][1];
  for (int i = 2; i < n; i++)
  {
    maxW += arr[i][0];
    if (arr[i][1] >= h1)
    {
      h2 = h1;
      h1 = arr[i][1];
    }
    else if (arr[i][1] >= h2)
      h2 = arr[i][1];
  }

  for (int i = 0; i < n; i++)
    result[i] = (maxW - arr[i][0]) * (arr[i][1] == h1 ? h2 : h1);
  return result;
}

int main()
{
  int n;
  cin >> n;

  int arr[n][2];
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1];

  vector<int> result = solution(n, arr);
  for (int i = 0; i < n; i++)
    cout << result[i] << " ";
  cout << endl;
  return 0;
}
