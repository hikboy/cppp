
#include "c13_5.h"

using namespace std;

HasPtr::~HasPtr()
{
    if(--*use == 0){
        delete ps;
        delete use;
    }
}

HasPtr& HasPtr::operator=(HasPtr hp)
{
    swap(*this, hp);
    return *this;
}

int main(void)
{
    HasPtr t1("hello"), t2("world");
    swap(t1, t2);
    return 0;
}