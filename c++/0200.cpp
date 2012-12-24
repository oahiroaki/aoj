#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int stations[100][100] = {0};
  int lines[300][4] = {0};

  
  cin >> station >> line;

  for (int i = 0; i < line; i++) {
    int a, b, cost, time;
    cin >> a >> b >> cost >> time;
    line[i][0] = a;
    line[i][1] = b;
    line[i][2] = cost;
    line[i][3] = time;
  }
  return 0;
}
