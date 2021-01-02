#include <bits/stdc++.h>
using namespace std;

int solution(int n, int k, int d, int arr[])
{
  int aSum = 0;

  for (int i = 0; i < n; i++)
    aSum += arr[i];

  if (aSum < k)
    return 0;

  int host = aSum / k;
  return host > d ? d : host;
}

int main()
{
  int t;
  cin >> t;

  int result[t];
  for (int i = 0; i < t; i++)
  {
    int n, k, d;
    cin >> n >> k >> d;
    int arr[n];
    for (int j = 0; j < n; j++)
      cin >> arr[j];
    result[i] = solution(n, k, d, arr);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
