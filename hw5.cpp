#include <iostream>

using namespace std;
const int SPACE = 3000;
const int SENTINEL = 0;
int main()
{
  int input = 0;
  int years[SPACE];
  int pos = 0;
  do
  {
    cin >> input;
    if (input == SENTINEL)
      break;
    years[pos] = input;
    pos ++;  
  }while(input != SENTINEL);
  for (int i = 0;i < pos; i++)
  {
    cout << years[i] << endl;
  }
  return 0;
}