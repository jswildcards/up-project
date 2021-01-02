#include <bits/stdc++.h>
using namespace std;

class Photo
{
public:
  int id, likes, liked_id;
  Photo() : id(-1), likes(0), liked_id(-1){};
  bool greaterThan(Photo *p)
  {
    return likes > p->likes || (likes == p->likes && liked_id < p->liked_id);
  }
};

int solution(int n, int arr[])
{
  Photo p[n];
  int m = 0, index = 0;

  for (int i = 0; i < n; i++)
  {
    bool f = false;

    for (int j = 0; j < n; j++)
    {
      if (p[j].id == arr[i])
      {
        p[j].likes++;
        p[j].liked_id = i;
        f = true;
        break;
      }
    }

    if (f == false)
    {
      p[m].id = arr[i];
      p[m].likes++;
      p[m++].liked_id = i;
    }
  }

  for (int i = 1; i < n; i++)
  {
    index = p[i].greaterThan(&p[index]) ? i : index;
  }

  return p[index].id;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << solution(n, arr) << "\n";
  return 0;
}
