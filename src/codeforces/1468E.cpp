#include <bits/stdc++.h>
using namespace std;

int solution(int arr[4])
{
  sort(arr, arr + 4);
  return arr[0] * arr[2];
}

int main()
{
  int t;
  cin >> t;

  int result[t];
  for (int i = 0; i < t; i++)
  {
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    result[i] = solution(arr);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
