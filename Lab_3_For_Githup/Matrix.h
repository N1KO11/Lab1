#include <iostream>
using namespace std;
class Matrix {
private:
    int data[3][3];
public:
    Matrix();
    Matrix(int arr[3][3]);
    Matrix operator+(const Matrix& rhs) const;
    Matrix operator-(const Matrix& rhs) const;
    Matrix operator*(const Matrix& rhs) const;
    Matrix operator*(const int scalar) const;
    bool operator==(const Matrix& rhs) const;
    bool operator!=(const Matrix& rhs) const;
    bool operator>(const Matrix& rhs) const;
    bool operator<(const Matrix& rhs) const;
    friend ostream& operator<<(ostream& os, const Matrix& m);
};
