#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    const char ca1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
    int length = strlen(ca) + strlen(ca1);
    char ca2[length];
    strcpy(ca2, ca);
    strcat(ca2, ca1);
    cp = ca2;
    while (*cp) {
        cout << *cp;
        ++cp;
    }
    cout << endl;
    return 0;
}

