
#include <iostream>
#include <cassert>

using namespace std;

void err_msg(initializer_list<string> il)
{
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void print(const int *beg, const int *end)
{
    while(beg != end)
        cout << *beg++ << endl;
}

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

auto func1(int i) -> int(*)[10]
{
    static int j[10] = {1,2,3,4};
    //static decltype(j) t;

    //t = j;

    //return (int(*)[10]) j;
    return reinterpret_cast<int(*)[10]> (j);
}

int ldd[] = {1,2,34,5};

decltype(ldd) *func2(int i)
{
    static int odd[] = {1,23,4,5};
    return &odd;
}


typedef bool Func(const string&, const string&);
typedef decltype(func1) Func2;

typedef bool (*PFunc)(const string&, const string&);
typedef decltype(func1) *PFunc2;

using F = int(int*, int);
using PF = int(*)(int*, int);

int (*f1(int)) (int*, int);

auto f2(int) -> int(*) (int*, int);

decltype(get_val) *getFcn(const string &);


int main(void)
{
    int j[2] = {0,1};
    string s ("a string");
    print(begin(j), end(j));
    err_msg({"hello", "this", "is", "my", "test"});

    assert(1>2);

    cout << s << endl;

    get_val(s, 0) = 'A';
    cout << s << endl;

    return 0;
}