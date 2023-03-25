#include "Stack.h"
using namespace std;
Stack::Stack() {
    top = -1;
}
void Stack::push(int num) {
    if (top == 99) {
        cout << "Stack overflow" << endl;
        return;
    }
    data[++top] = num;
}
int Stack::pop() {
    if (top == -1) {
        cout << "Stack underflow" << endl;
        return -1;
    }
    return data[top--];
}
ostream& operator<<(ostream& os, const Stack& s) {
    for (int i = s.top; i >= 0; i--) {
        os << s.data[i] << endl;
    }
    return os;
}
