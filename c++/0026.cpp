#include <cstdio>


using namespace std;

const int MAX = 10;

int map[MAX][MAX] = {0};

const int def[12][2] = {
  {1, 0}, {-1, 0}, {0, 1}, {0, -1},
  {1, 1}, {-1, 1}, {1, 1}, {1, -1},
  {2, 0}, {-2, 0}, {0, 2}, {0, -2}
};

void drop(int *p, int size) {
  int x , y;
  for (int i = 0; i < size * 4; i++) {
    x = p[0] + def[i][0];
    y = p[1] + def[i][1];
    if (x < MAX && x >= 0 && y < MAX && y >= 0)
      map[x][y] += 1;
  }
}

int main() {
  
  int p[2], size, sum, max;

  while (scanf("%d,%d,%d", &p[0], &p[1], &size) != EOF)
    drop(p, size);

  for (int i = sum = max = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      if (map[i][j] == 0) sum++;
      if (map[i][j] > max) max = map[i][j];
    }
  }
  printf("%d\n%d\n", sum, max);
  return 0;
}
