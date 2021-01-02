#include <bits/stdc++.h>
using namespace std;

int mbs(int arr[], int start, int end, int target)
{
  if (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] <= target)
    {
      int index = mbs(arr, mid + 1, end, target);
      return index > mid ? index : mid;
    }
    else
      return mbs(arr, start, mid - 1, target);
  }

  return -1;
}

int solution(int n, int x[], int m)
{
  return mbs(x, 0, n - 1, m) + 1;
}

int main()
{
  int n, q, m;
  cin >> n;

  int x[n];
  for (int i = 0; i < n; i++)
    cin >> x[i];
  sort(x, x + n);

  cin >> q;
  int result[q];
  for (int i = 0; i < q; i++)
  {
    cin >> m;
    result[i] = solution(n, x, m);
  }

  for (int i = 0; i < q; i++)
    cout << result[i] << endl;
  return 0;
}
