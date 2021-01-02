#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m, int a[], int b[])
{
  priority_queue<int, vector<int>, greater<int>> john(a, a + n);
  priority_queue<int> jack(b, b + m);
  int johnTotal = 0;
  int jackTotal = 0;
  int step = 0;

  for (int i = 0; i < n; i++)
    johnTotal += a[i];
  for (int i = 0; i < m; i++)
    jackTotal += b[i];

  while (johnTotal <= jackTotal)
  {
    int min = john.top();
    int max = jack.top();
    int diff = max - min;
    if (max > min)
    {
      john.pop();
      jack.pop();
      john.push(max);
      jack.push(min);
      johnTotal += diff;
      jackTotal -= diff;
      step++;
    }
    else
      break;
  }

  return johnTotal <= jackTotal ? -1 : step;
}

int main()
{
  int t;
  cin >> t;

  int result[t];
  for (int i = 0; i < t; i++)
  {
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int j = 0; j < n; j++)
      cin >> a[j];

    int b[m];
    for (int j = 0; j < m; j++)
      cin >> b[j];

    result[i] = solution(n, m, a, b);
  }

  for (int i = 0; i < t; i++)
    cout << result[i] << endl;
  return 0;
}
