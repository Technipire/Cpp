#include<iostream>
#include "Sales_data.h"

using namespace std;

int main(){
    Sales_data book;
    cout << "Enter data: " << endl;
    double price;
    cin >> book.bookNo >> book.units_sold >> book.revenue;
    cout << book.bookNo << endl;
    cout << book.units_sold << endl;
    cout << book.revenue << endl;
    return 0;
}
