#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    set<int> c;
    cout << "1 c.empty : " << c.empty() << endl;
    c.insert(1);
    c.insert(2);
    c.insert(3);

    cout << "2 c.empty : " << c.empty() << endl;
    cout << "c.size : " << c.size() << endl;


    auto c2(c);
    auto c3 = c2;
    //c3.~set();
    cout << "c3.empty : " << c3.empty() << endl;

    return 0;
}