#include <iostream>
#include "3.h"
using namespace std;
void third() {
    cout << "Task 3:" << endl;
    complex a3;
    a3.im = 1, a3.re = 2;
    double b3 = 1.2;
    cout << "Values: " << a3.re << "+" << a3.im << "i" << " " << b3 << endl;
    a3.Complex(b3);
    cout << a3.re << "+" << a3.im << "i" << endl;
    a3.Complex(&b3);
    cout << a3.re << "+" << a3.im << "i" << endl;
}
int main() {
    third();
}
