#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void upcase(string& s) {
  for (int i = 0; i < s.length(); i++)
    if (islower(s[i])) s[i] -= 32;
  return;
}

int main() {
  string str;
  getline(cin, str);
  upcase(str);
  cout << str <<endl;
  return 0;
}
