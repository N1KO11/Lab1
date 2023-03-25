#include <iostream>
#include "1.h"
using namespace std;
void first(){
    cout << "Task 1:" << endl;
    int val = 5;
    Add(val, 5);
    cout << val << endl;
    val = 5;
    Add(&val, 10);
    cout << val << endl;
}
int main() {
    first();
}
