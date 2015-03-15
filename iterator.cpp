#include <iostream>
#include <string>


using namespace std;

int main()
{
  string s("some thing");
  for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
  {
    *it = toupper(*it);
    cout << " it: " << *it << endl;
  }
  
  cout << s << endl;
}