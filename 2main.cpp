#include <iostream>
#include "2.h"
using namespace std;
void second() {
    cout << "Task 2:" << endl;
    double a2 = 8.35, b2 = 15.45;
    Discard(a2);
    cout << a2 << endl;
    Discard(&b2);
    cout << b2 << endl;
}
    int main() {
    second();
}
