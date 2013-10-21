#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Data
{
public:
  int size;
  int **data;
  Data(int s);
  void init(int num);
  void input();
  Data calc();
  void print();
};

Data::Data(int s)
{
  int** t = new int*[s];
  for (int i = 0; i < s; i++)
    t[i] = new int[s];
  this->size = s;
  this->data = t;
}

void Data::init(int num)
{
  for (int i = 0; i < this->size; i++)
    for (int j = 0; j < this->size; j++)
      this->data[i][j] = num;
}

void Data::input()
{
  string line;
  stringstream ss;

  getline(cin, line);
  ss << line;
  for (int i = 0; i < this->size; i++)
    for (int j = 0; j < this->size; j++)
      ss >> this->data[i][j];
}

Data Data::calc()
{
  int s = this.size;
  
  Data temp = new Data(s + 1);
  temp.init();

  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      temp.data[i][j] = this->data[i][j];
      temp.data[s][j] += this->data[i][j];
      temp.data[i][s] += this->data[i][j];
      temp.data[s][s] += this->data[i][j];
    }
  }
  return temp;
}

void Data::print()
{
  int s = this->size;
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      if (j < s - 1)
        cout << this->data[i][j] << " ";
      else
        cout << this->data[i][j] << "\n";
    }
  }
}

int main() {
  int n;
  cin >> n;
  
  Data d = new Data(n);

  d.init(0);
  d.input();
  Data ans = d.calc();
  ans.print();
  return 0;
}
