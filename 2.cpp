#include "2.h"
void Discard(double& x) {
    x = x - (int)x;
}
void Discard(double* x) {
    *x = (*x) - (int)(*x);
}