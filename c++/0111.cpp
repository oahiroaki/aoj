#include <iostream>
#include <vector>
#include <bitset>
#include <string>

std::string src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ .,-'?";

void decode(std::string str)
{
  unsigned int i, j;
  for (i = 0; i < str.size(); i++)
    for (j = 0; j < src.size(); j++)
      if (src[j] == str[i]) {
      }
}

int main()
{
  std::string input = "?D-C'KOPUA";
  decode(input);
  return 0;
}
