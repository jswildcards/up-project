#include <bits/stdc++.h>
using namespace std;

class Customer
{
public:
  int index, value;
  bool isDeleted;
  Customer(int i, int v, bool d = false) : index(i), value(v), isDeleted(d) {}
};

class MyComparator
{
public:
  bool operator()(Customer *c1, Customer *c2) const
  {
    return c1->value < c2->value || (c1->value == c2->value && c1->index > c2->index);
  }
};

vector<int> solution(int n, int arr[][2])
{
  vector<int> result;
  queue<Customer *> q;
  priority_queue<Customer *, vector<Customer *>, MyComparator> heap;
  int index = 0;

  for (int i = 0; i < n; i++)
  {
    int action = arr[i][0], value = arr[i][1];

    if (action == 1)
    {
      Customer *c = new Customer(++index, value);
      q.push(c);
      heap.push(c);
    }
    else if (action == 2)
    {
      Customer *c = q.front();
      q.pop();
      while (c->isDeleted == true)
      {
        c = q.front();
        q.pop();
      }
      c->isDeleted = true;
      result.push_back(c->index);
    }
    else
    {
      Customer *c = heap.top();
      heap.pop();
      while (c->isDeleted == true)
      {
        c = heap.top();
        heap.pop();
      }
      c->isDeleted = true;
      result.push_back(c->index);
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
  {
    cin >> arr[i][0];
    if (arr[i][0] == 1)
      cin >> arr[i][1];
  }

  vector<int> result = solution(n, arr);
  for (int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
  cout << endl;
  return 0;
}
