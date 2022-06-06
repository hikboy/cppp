
#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <string>
#include "strBlob.h"

using namespace std;

void process(shared_ptr<int> ptr)
{

}

int main(void)
{
    shared_ptr<string> p1;
    shared_ptr<list<int>> p2;
    if(p1 && p1->empty()){
        *p1 = "p1 hello";
        cout << "give p1 val" << endl;
    }

    shared_ptr<string> p3 = make_shared<string>();
    if(p3 && p3->empty()){
        *p3 = "p3 hello";
        cout << "give p3 val" << endl;
    }

    shared_ptr<string> p4 = make_shared<string>("world");
    if(p4 && p4->empty()){
        *p4 = "p4 hello";
        cout << "give p4 val" << endl;
    }

    shared_ptr<string> p5 = make_shared<string>(10, '9');

    auto p6 = make_shared<int>();
    auto p7(p6);
    auto ap1 = new auto("hello");
    auto ap2 = new auto(5);
    //auto ap3 = new auto{0,1,2};

    const int *pci = new const int (1024);
    const string *pcs = new const string;
    auto pp = new const string;

    int *p11 = new int;
    int *p22 = new (nothrow) int;
    delete p11;
    delete p22;

    int *pq(new int(42));
    auto qp1 = pq;
    delete pq;
    pq = nullptr;

    shared_ptr<double> p1l;
    shared_ptr<int> p2l(new int(42));
    //shared_ptr<int> p3l = new int(1024);

    if(!p2l.unique())
        p2l.reset(new int(1000));
    *p2l += 18;
    
    shared_ptr<int> p(new int(42));
    process(p);
    process(shared_ptr<int>(p));
    int i = *p;

    auto ap = new int();
    auto asp = make_shared<int>();
    //process(ap);
    //process(new int());
    process(asp);
    process(shared_ptr<int>(p));

    unique_ptr<double> p1a;
    unique_ptr<int> p2a(new int(42));
    //unique_ptr<double> p3a(p1a);
    unique_ptr<double> p4a;
    //p4a = p1a.release();
    unique_ptr<double> p5a(p1a.release()); 
    p5a.reset(p4a.release()); 

    auto ppp = p5a.release();

    int ix =1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;
    //IntP p00(ix);
    //IntP p01(pi);
    IntP p02(pi2);
    //IntP p03(&ix);
    IntP p04(new int(2048));
    //IntP p05(p2a.get());

    auto pp1 = make_shared<int>(42);
    weak_ptr<int> wp(p);
    
    if(shared_ptr<int> np = wp.lock()){
        cout << "np is exist" << endl;
    }
    
    return 0;
}
