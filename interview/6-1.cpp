#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void swap2(int& a, int& b);
void print_arr(int arr[], int size);
int main()
{
  int a [10] = {1,5,4,3,5,2,4,3,4,2};
 
 /*
  for (int i = 0;i < 10; ++i)
  {
    a[i] = rand()%80 + 1;
    //cout << a[i] << endl;
  }
  */
  
 int pivot = a[3];
 int total = 10;
 int sm_index = 0;
 int big_index = total - 1;
 
 print_arr(a,total);
 for (int i = 0;sm_index < big_index; ++ i)
 {
   
   if (a[i] < pivot)
   {
     cout << "smaller! " << "i=" << i << " "<<"sm=" << sm_index << " " 
     << "big=" << big_index << " " << a[i] << " " << pivot << endl;
     ++sm_index;
     print_arr(a, total);
   }
   else if (a[i] > pivot)
   {
     
     while(a[i] > pivot)
     {
       cout << "bigger! " << "i=" << i << " "<<"sm=" << sm_index << " " 
     << "big=" << big_index << " " << a[i] << " " << pivot << endl;
       int temp = a[big_index];
       a[big_index] = a[sm_index];
       a[sm_index] = temp;
       --big_index;
       
       print_arr(a, total);
     }
     ++sm_index;
     if (a[i] == pivot)
     {
       //if (a[i] != a[i + 1])
       {
	int temp = a[sm_index];
	a[sm_index] = a[i];
	a[i] = temp;
	cout << "equal! " << "i=" << i << " "<<"sm=" << sm_index << " " 
	<< "big=" << big_index << " " << a[i] << " " << pivot << endl;
	print_arr(a, total);
       }
     //break;
     }
     
   }
   else
   {
     
      cout << "equal new! " << "i=" << i << " "<<"sm=" << sm_index << " "
      << "big=" << big_index << " " << a[i] << " " << pivot << endl;
      if (a[i] != a[i + 1])
     {
	int temp = a[i + 1];
	a[i + 1] = a[i];
	a[i] = temp;
	--i;
	print_arr(a, total);
     }
     //break;
  } 
 }
 cout << "Result: " << endl;
 for (auto num : a)
   cout << num << endl;
  
  return 0;
}

void print_arr(int arr[], int size)
{
  for (int i = 0; i < size ; ++i)
    cout << arr[i] <<"," ;
    
  cout << endl;
}
void swap2(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

