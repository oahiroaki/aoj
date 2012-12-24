#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;


int ctoi(char c) {
  return isdigit(c) ? c - '0' : c;
}

char itoc(int i) {
  return i + '0';
}

string add(string a, string b) {
  int max_leng, t, ap, bp;
  bool over = false;

  string ret = "";
  max_leng = (a.length() > b.length()) ? a.length() : b.length();
  if (max_leng > 80)
    return "overflow";

  ap = a.length() - 1;
  bp = b.length() - 1;
  for (int i = 0; i < max_leng; i++) {
    if (ap >= 0 && bp >= 0)
      t = ctoi(a.at(ap)) + ctoi(b.at(bp));
    if (ap >= 0 && bp < 0)
      t = ctoi(a.at(ap));
    if (ap < 0 && bp >= 0)
      t = ctoi(b.at(bp));
    if (over) t++; // increase in digit
    ret += itoc(t % 10);
    if (t > 9) over = true;
    else over = false;
    ap--; bp--;
  }
  if (over) ret += '1';
  reverse(ret.begin(), ret.end());
  if (ret.length() > 80) return "overflow";
  else return ret;
}

int main() {
  int n;
  string number1, number2;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> number1;
    cin >> number2;
    cout << add(number1, number2) << endl;
  }
  return 0;
}
