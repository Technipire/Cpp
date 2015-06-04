#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned char bits = 0227;
    bitset<24> x(~bits);
    unsigned b1 = 20;
    unsigned b2 = 30;
    unsigned b3 = b1 << 2;
    cout << b3 << endl;
    bitset<8> x1(b1);
    bitset<8> x2(b2);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    bitset<8> x3(b1 & b2);
    cout << "x1 & x2 = " << x3 << endl;

    return 0;
}
