#include "3.h"
void complex::Complex(double& x) {
    re *= x;
    im *= x;
}
void complex::Complex(double* x) {
    re *= *x;
    im *= *x;
}