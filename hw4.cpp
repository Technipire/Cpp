#include<iostream>

using namespace std;


string n_copies(string s, int n){
  if(n <= 0)
    return "";
  else{
    return s + n_copies(s, n - 1);
  }
}

void draw_row(string s1, int n_s1s, string s2, int n_s2s){
    cout << n_copies(s1, n_s1s)
         << n_copies(s2, n_s2s)
	 << endl;
	 //cout << n_s1s << " " << n_s2s << endl;
 
}
void draw_pat1(string s1, string s2, int n, int width){
 if(n <= width % 2 )
    return;
  else{
    draw_row(s1, n, s2, width - n);
    return draw_pat1(s1, s2, n - 2, width);
  }
  
}
void draw_pat2(string s1, string s2, int n, int width){
 if(n > width)
    return;
  else{
    draw_row(s1, n, s2, width - n);
    return draw_pat2(s1, s2, n + 2, width);
  }
  
}
void draw_picture(string s1, string s2, int width){
    draw_pat1(s1, s2, width, width);
    draw_pat2(s1, s2, width % 2, width);
}
int main(){
  string s1, s2;
  int n;
  cout << "Enter first: " << endl;
  cin >> s1;
  cout << "Enter second: " << endl;
  cin >> s2;
  cout << "Enter width: " << endl;
  cin >> n;
  draw_picture(s1, s2, n);
  
  return 0;
}