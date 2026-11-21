#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter c1(5);
    Counter c2(10);

    Counter c3 = ++c1;
    Counter c4 = --c2;

    cout << "c3 count = " << c3.get_count() << endl; // 6
    cout << "c4 count = " << c4.get_count() << endl; // 9

    Counter c5 = c1++;
    cout << "c5 count = " << c5.get_count() << endl;

    return 0;
}