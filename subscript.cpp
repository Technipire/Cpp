#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string s = "";
  string a = "abcdefg";
  for (auto &c : a)
  {
    c = 'a';
  }
  cout << "s = " << s << endl;
  cout << "a = " << a << endl;
}