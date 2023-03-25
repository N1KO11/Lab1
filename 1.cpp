#include "1.h"
void Add(int& value, int offs)
{
    value += offs;
}
void Add(int* value, int offs)
{
    if (value)
    {
        Add(*value, offs);
    }
}

