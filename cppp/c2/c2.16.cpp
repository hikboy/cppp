#include <iostream>

int main(void)
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14;
    r2 = r1;
    i = r2;
    r1 = d;

    int ii = 42;
    int *pp;
    int *&rr = pp;
    rr = &ii;
    *rr = 0;

    //int * ip, &rt = ip;
    int * ip, *&rt = ip;

    return 0;
}