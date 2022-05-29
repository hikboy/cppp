
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>

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

    vector<int> vec;
    istream_iterator<int> in(cin);
    istream_iterator<int> in_eof;

    //cout << accumulate(in, in_eof, 0) << endl;

    while(in != in_eof)
        vec.push_back(*in++);

    for(const auto &v : vec)
        cout << v << " ";

    cout << endl;

    ostream_iterator<int> out(cout, ", ");
    for(auto e : vec)
        //*out++ = e;
        out = e;
        //we can use either

    cout << endl;

    copy(vec.begin(), vec.end(), out);

    return 0;
}

// insert iterators
// stream iterators
// reverse iterators
// move iterators