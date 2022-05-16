
#include <iostream>

using namespace std;

int main(void)
{
    const int v2 = 0, v1 = v2;

    //int * p1 = &v1;

    //int &r1 = v1;

    int i;

    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    return 0;
}