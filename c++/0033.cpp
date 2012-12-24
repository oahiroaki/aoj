#include <iostream>
#include <vector>

using namespace std;

bool solve(int *data)
{
  int i, j, k;
  int stack1[11] = {0};
  int stack2[11] = {0};

  for (i = j = k = 0; i < 10; i++) {
    if (stack1[j] < data[i]) {
      j += 1;
      stack1[j] = data[i];
    }
    else if (stack2[k] < data[i]) {
      k += 1;
      stack2[k] = data[i];
    }
    else {
      return false;
    }
  }
  return true;
}

int main()
{
  int i, j, n;

  cin >> n;

  for (j = 0; j < n; j++) {
    int *data = new int[10];
    for (i = 0; i < 10; i++)
      cin >> data[i];
    if (solve(data))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
