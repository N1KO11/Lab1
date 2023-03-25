#include "Matrix.h"
using namespace std;
Matrix::Matrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            data[i][j] = 0;
        }
    }
}
Matrix::Matrix(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            data[i][j] = arr[i][j];
        }
    }
}
Matrix Matrix::operator+(const Matrix& rhs) const {
    Matrix result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] + rhs.data[i][j];
        }
    }
    return result;
}
Matrix Matrix::operator-(const Matrix& rhs) const {
    Matrix result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] - rhs.data[i][j];
        }
    }
    return result;
}
Matrix Matrix::operator*(const Matrix& rhs) const {
    Matrix result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result.data[i][j] += data[i][k] * rhs.data[k][j];
            }
        }
    }
    return result;
}
Matrix Matrix::operator*(const int scalar) const {
    Matrix result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] * scalar;
        }
    }
    return result;
}
bool Matrix::operator==(const Matrix& rhs) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (data[i][j] != rhs.data[i][j]) {
                return false;
            }
        }
    }
    return true;
}
bool Matrix::operator!=(const Matrix& rhs) const {
    return !(*this == rhs);
}
bool Matrix::operator>(const Matrix& rhs) const {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum1 += data[i][j];
            sum2 += rhs.data[i][j];
        }
    }
    return sum1 > sum2;
}
bool Matrix::operator<(const Matrix& rhs) const {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum1 += data[i][j];
            sum2 += rhs.data[i][j];
        }
    }
    return sum1 < sum2;
}
ostream& operator<<(ostream& os, const Matrix& m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            os << m.data[i][j] << " ";
        }
        os << endl;
    }
    return os;
}
