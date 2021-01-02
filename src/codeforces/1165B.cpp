#include <bits/stdc++.h>
using namespace std;

int solution(int n, int arr[])
{
  priority_queue<int, vector<int>, greater<int>> container(arr, arr + n);
  int i = 1;
  int result = 0;

  while (container.size() > 0)
  {
    while (container.size() > 0 && container.top() < i)
      container.pop();
    if (container.size() > 0)
    {
      container.pop();
      result++;
    }
    i++;
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
