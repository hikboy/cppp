
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
    list<int> lst {1,2,3,4};
    list<int> lst1, lst2, lst3;

    copy(lst.begin(), lst.end(), front_inserter(lst1));
    for(const auto &l : lst1)
        cout << l << " ";
    cout << endl;

    copy(lst.begin(), lst.end(), inserter(lst2, lst2.begin()));
    for(const auto &l : lst2)
        cout << l << " ";
    cout << endl;

    copy(lst.begin(), lst.end(), back_inserter(lst3));
    for(const auto &l : lst2)
        cout << l << " ";
    cout << endl;
    return 0;
}

// insert iterators
// stream iterators
// reverse iterators
// move iterators