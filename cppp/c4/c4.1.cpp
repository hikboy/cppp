#include <iostream>
using namespace std;

int main(void)
{
    char *cp = nullptr;

    if(cp)
        cout << "this is my test cp" << endl;

    if(*cp)
        cout << "this is my test *cp " << endl;
    
    // cast-name<type> (expression);
    // static_cast
    // dynamic_cast
    // const_cast
    // reinterpret_cast

    return 0;
}