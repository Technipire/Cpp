#include <iostream>
#include "stdio.h"
using namespace std;

int main () {
    printf("Enter a number: ");
    int input = -1;
    cin >> input;
    int counter = 0;
    while (input < 0 && counter < 20) {
        printf("Enter a number: ");
        cin >> input;
        counter++;
    }

    for (int i = 0; i < input; ++i) {
        for (int j = input - i - 1; j < input; ++j) {
            printf("#");
        }
        printf("\n");
    }


    return 0;
}
