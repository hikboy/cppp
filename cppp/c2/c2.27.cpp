
#include <iostream>

int main(void)
{
    int i2;
    //int i = -1, &r1 = 0;
    int * const p2 = &i2;

    //why this r1 is right?
    const int i = -1, &r1 = 0;

    const int * const p3 = &i2;
    const int * p1 = &i2;

    //const int &const r2;
    const int i3 = i, &r3 = i;

    //const int *const p5;

    return 0;
}