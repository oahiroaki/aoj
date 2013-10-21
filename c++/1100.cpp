#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int i, j, n;
  int **p;
  vector<double> ans;

  while (1) {
    scanf("%d", &n);
    if (n < 3) break;
    else p = new int*[n];
    for (i = 0; i < n; i++) {
      p[i] = new int[2];
      scanf("%d %d", &p[i][0], &p[i][1]);
    }

    double a = 0.0;
    for (i = 0; i < n; i++) {
      if (i + 1 >= n) j = 0;
      else j = i + 1;
      a +=
        (double)p[i][0] * (double)p[j][1] -
        (double)p[j][0] * (double)p[i][1];
    }
    ans.push_back(fabs(a / 2));

    for (i = 0; i < n; i++)
      delete[] p[i];
    delete[] p;
  }

  for (i = 0; i < ans.size(); i++)
    printf("%d %.1lf\n", i + 1, ans[i]);
  return 0;
}
