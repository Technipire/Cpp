#include<iostream>

using namespace std;

int main(){
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;

    cout << i - u << endl;
    cout << u - i2 << endl;
    cout << 3.14L << endl;
    cout << "Whoe goes with F\14rgus?\012" << endl;
    cout << "2M\n";
    cout << "2\tM\n";
    //cin >> int input; error: expected primary-expression before ‘int’
    //double salary = wage = 99.9;error: ‘wage’ was not declared in this scope

    int x = {3.14};
    int y = 3.14;
    double _ = 3.13;
    cout << _ << endl;
    int sum = 0;
    for (int i = 0; i != 3; ++i)
        sum += i;
    cout << i << " " << sum << endl;
    /*
    int ival = 1.01;
    int &rval1 = 1.01;
    int &rval2 = ival;
    int &rval3;
    */
    int z = 10;
    int *pz = &z;
    *pz = *pz * *pz;
    cout << *pz << endl;

    int* dp = &z;
    if (pz == dp) cout << true << endl;
    const int *p1 = &i2;
    const int &r = 0;
    const int ic = 0;;
    const int *const pt = &ic;
    int *pp, *const pq;
    pq = pp;
    return 0;

}
