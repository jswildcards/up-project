#include <bits/stdc++.h>
using namespace std;

int solution(int n, int a[], int m, int b[])
{
  priority_queue<int, std::vector<int>, std::greater<int>> boys(a, a + n), girls(b, b + m);
  int result = 0;

  while (!boys.empty() && !girls.empty())
  {
    int b = boys.top(), g = girls.top();
    if (b + 1 != g && b != g && b - 1 != g)
    {
      if (b < g)
        boys.pop();
      else
        girls.pop();
    }
    else
    {
      result++;
      boys.pop();
      girls.pop();
    }
  }

  return result;
}

int main()
{
  int n, m;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++)
    cin >> b[i];

  cout << solution(n, a, m, b) << endl;
  return 0;
}
