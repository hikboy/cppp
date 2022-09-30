#include <iostream>
#include <boost/type_index.hpp>

using namespace std;

template<typename T>
void f(const T& param)
{
    using boost::typeindex::type_id_with_cvr;

    cout << "T  = " << type_id_with_cvr<T>().pretty_name() << endl;

    cout << "param = " << type_id_with_cvr<decltype(param)>().pretty_name() << endl;

}

int main(void)
{
    //char *cp = nullptr;

    //if(cp)
    //    cout << "this is my test cp" << endl;

    //if(*cp)
    //    cout << "this is my test *cp " << endl;
    
    // cast-name<type> (expression);
    // static_cast
    // dynamic_cast
    // const_cast
    const char * pc;
    char * p = const_cast<char *>(pc);
    
    //const char * ppp = const_cast<const char *>(p);
    //const char * ppp = p;
    // reinterpret_cast

    return 0;
}