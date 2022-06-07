
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main(void)
{
    int *pia = new int[15];
    typedef int arrT[42];
    int *p = new arrT;

    int *pia2 = new int[10]();
    string *psa = new string[10];
    string *psa2 = new string[10]();

    int *pia3 = new int[10]{1,2,3,4,5,6,7,8,9};
    string *psa3 = new string[10]{"a", "an", "the", string(3,'x')};

    delete [] psa3;
    delete [] psa2;

    unique_ptr<int[]> up(new int[10]);
    up[1] = 5;
    up.release();

    shared_ptr<int> sp(new int[10], [](int *p) { delete[] p; });
    for(size_t i = 0; i!=10; ++i)
        *(sp.get() + i) = i;
    sp.reset();

    return 0;
}