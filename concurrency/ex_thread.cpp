#include <iostream>
#include <atomic>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

//int accum = 0;
/*
mutex accum_mutex;
void square(int n) {
    int temp = n * n;
    accum_mutex.lock();
    accum += temp;
    accum_mutex.unlock();
}
*/
atomic<int> accum(0);
void square(int n) {
    accum += n * n;
}
int main() {
    vector<thread> ths;
    for (int i = 1; i < 20; ++i) {
        ths.push_back(thread(&square, i));
    }
    for (auto& th : ths) {
        th.join();
        cout << "accum = " << accum << endl;
    }
    return 0;
}
