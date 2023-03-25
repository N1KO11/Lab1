#include <iostream>
using namespace std;
class Stack {
private:
    int data[100];
    int top;
public:
    Stack();
    void push(int num);
    int pop();
    friend ostream& operator<<(ostream& os, const Stack& s);
};
