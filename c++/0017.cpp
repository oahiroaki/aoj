#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

string slide(string s) {
  string r = s;
  for (int i = 0; i < r.length(); i++) {
    if (islower(r[i])) {
      if (r[i] == 'z') r[i] = 'a';
      else r[i] += 1;
    }
  }
  return r;
}

bool check_word(string s) {
  string dic[3] = {"this", "the", "that"};
  for (int i = 0; i < 3; i++)
    if (s.find(dic[i]) != string::npos) return true;
  return false;
}

int main() {
  string in, temp;
  bool found;
  while (1) {
    getline(cin, in);
    if (cin.eof()) break;
    for (temp = in, found = false; ; temp = slide(temp)) {
      found = check_word(temp);
      if (found) break;
    }
    cout << temp << endl;
  }
  return 0;
}
