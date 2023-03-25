#include "Matrix.h"
#include "Stack.h"
using namespace std;
int main() {
    // Матрицы
    int arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7},
                      {6, 5, 4},
                      {3, 2, 1}};
    Matrix m1(arr1);
    Matrix m2(arr2);
    // Сложение матриц
    Matrix m3 = m1 + m2;
    cout << "m1 + m2:\n" << m3 << endl;
    // Вычитание матриц
    Matrix m4 = m1 - m2;
    cout << "m1 - m2:\n" << m4 << endl;
    // Умножение матриц
    Matrix m5 = m1 * m2;
    cout << "m1 * m2:\n" << m5 << endl;
// Умножение матрицы на вещественное число
    Matrix m6 = m1 * 2;
    cout << "m1 * 2:\n" << m6 << endl;
// Сравнение матриц
    if (m1 == m2) {
        cout << "m1 == m2" << endl;
    } else {
        cout << "m1 != m2" << endl;
    }
    if (m1 != m2) {
        cout << "m1 != m2" << endl;
    } else {
        cout << "m1 == m2" << endl;
    }
    if (m1 > m2) {
        cout << "m1 > m2" << endl;
    } else {
        cout << "m1 <= m2" << endl;
    }
    if (m1 < m2) {
        cout << "m1 < m2" << endl;
    } else {
        cout << "m1 >= m2" << endl;
    }
// Стек
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << s << endl;

    s.pop();
    s.pop();
    cout << s << endl;
    return 0;
}
