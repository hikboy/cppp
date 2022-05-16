#include <iostream>
#include <stdexcept>
#include <exception>
#include <new>
//#include <type_info>

using namespace std;

int fun(void)
{
    int i = 5; 
    int j = 6;

    if(i != j)
        throw runtime_error("Data must refer to same ISBN");
    cout << i + j << endl;

    return 0;
}

int main(void)
{

    try{
        fun();
    } catch(runtime_error err){
        cout << err.what() << endl;
    }

    cout << "test to do" << endl;

#if 0
    try{
       program-statemants 
    } catch (exception-declaration){
        handler-statement
    }
#endif

    return 0;
}