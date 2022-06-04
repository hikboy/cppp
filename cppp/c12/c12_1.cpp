
#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <string>
#include "strBlob.h"

using namespace std;

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

    return 0;
}