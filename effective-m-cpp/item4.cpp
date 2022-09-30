
#include <iostream>
#include <vector>
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
    cout << "hello" << endl;
    const char *pc;
    f(pc);

    char a;
    f(a);

    char *b;
    f(b);

    std::vector<bool> bdata;
    cout << sizeof(std::vector<bool>) << "-"<< sizeof(bdata) << endl;
    //bool *pb = &bdata[0];
    f(bdata);
    auto pb = bdata[0];
    f(pb);


    return 0;
}