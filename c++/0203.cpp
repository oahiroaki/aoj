#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MOVE = 0;
const int BARRIIER = 1;
const int JUMP = 2;

int course[15][15];
int prog[15][15];
int sizeX, sizeY;
int answer = 0;

void init() {
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      prog[i][j] = 0;
      course[i][j] = -1;
    }
  }
}

void inputCourse() {
  for (int i = 0; i < sizeY; i++) {
    for (int j = 0; j < sizeX; j++) {
      cin >> course[i][j];
    }
  }
}

int main(int argc, char* argv[]) {
  while (cin >> sizeX >> sizeY, sizeX) {
    init();
    inputCourse();
    answer = 0;
    for (int x = 0; x < sizeX; x++) {
      if (course[0][x] == MOVE) {
        prog[0][x] = 1;
      }
    }
    for (int y = 0; y < sizeY; y++) {
      for (int x = 0; x < sizeX; x++) {
        if (course[y][x] == MOVE) {
          if (y + 1 >= sizeY) {
            answer += prog[y][x];
          } else {
            if (course[y + 1][x] == MOVE || course[y + 1][x] == JUMP) {
              prog[y + 1][x] += prog[y][x];
            }
            if (x - 1 >= 0 && course[y + 1][x - 1] == MOVE) {
              prog[y + 1][x - 1] += prog[y][x];
            }
            if (x + 1 < sizeX && course[y + 1][x + 1] == MOVE) {
              prog[y + 1][x + 1] += prog[y][x];
            }
          }
        }
        if (course[y][x] == JUMP) {
          if (y + 2 >= sizeY) {
            answer += prog[y][x];
          } else {
            prog[y + 2][x] += prog[y][x];
          }
        }
      }
    }
    cout << answer << endl;
  }
  return 0;
}
