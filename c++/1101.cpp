#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> input_order()
{
  vector<string> r;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    r.push_back(s);
  }
  return r;
}

string delete_word(string s, int c)
{

}

string excute_order(string s, vector<string> order)
{
  for (int i = 0; i < order.size(); i++) {
    order[i]
  order
}

int main()
{
  int n;
  vector<string> orders;
  string str;
  cin >> n;
  for (int i = 0; i < n; i++) {
    getline(cin, str);
    orders = input_order();
    excute_order(str, orders);
  }
  return 0;
}
