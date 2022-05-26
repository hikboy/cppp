
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

using namespace std;

int main(void)
{
    vector<int> vec {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, 42};
    int val = 42;
    auto result = find(vec.cbegin(), vec.cend(), val);
    cout << "The val " << val
         << (result == vec.cend()
             ? " is not present " : " is present ") 
         << endl;

    auto cnt = count(vec.cbegin(), vec.cend(), val);

    cout << "times : " << cnt << endl;

    int sum = accumulate(vec.cbegin(), vec.cend(), 0.0);
    cout << "sum is " << sum << endl;

    vector<int> vec1 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, 42, 43};
    auto r = equal(vec.cbegin(), vec.cend(), vec1.cbegin());
    cout << "r is " << r << endl;

    vector<double> vv {1.0,2.0,3.0};
    auto r1 = accumulate(vv.cbegin(), vv.cend(), 0.0);
    cout << "r1 is " << r1 << endl;

    const char* rouster1 = "hello";
    const char* rouster2 = "hello";

    fill(vv.begin(), vv.end(), 0.0);
    for(auto ivv = vv.begin(); ivv != vv.end(); ivv++)
        cout << *ivv << endl;

    fill_n(vv.begin(), vv.size(), 100);
    for(auto ivv = vv.begin(); ivv != vv.end(); ivv++)
        cout << *ivv << endl;
    //auto r2 = equal(rouster1.cbegin(), rouster1.cend(), rouster2.cbegain());

    vector<int> vccr;
    auto it = back_inserter(vccr);
    *it = 55;
    cout << "vccr size is " << vccr.size() << endl;

    fill_n(back_inserter(vccr), 10, 11);
    cout << "vccr size is " << vccr.size() << endl;

    int a1[] = {0,1,2,3,4,5};
    cout << "sizeof(a1) is " << sizeof(a1) << endl;
    cout << "sizeof(*a1) is " << sizeof(*a1) << endl;

    int a2[sizeof(a1)/sizeof(*a1)];

    auto ret = copy(begin(a1), end(a1), begin(a2));
    //cout << "copy ret is " << *ret << endl;
    cout << "copy is " << (ret == end(a2)? "ok": "bad") << endl;

    vector<int> hi {0,0,0,0,0,0,0,0,0,0,0,0};
    replace(hi.begin(), hi.end(), 0, 55);
    for(auto iii = hi.begin(); iii != hi.end(); iii++)
        cout << *iii << ' ';
    cout << endl;

    vector<int> llo;
    replace_copy(hi.begin(), hi.end(), back_inserter(llo), 55, 66);
    for(auto iii = llo.begin(); iii != llo.end(); iii++)
        cout << *iii << ' ';
    cout << endl;

    list<int> lst {1,2,3,4,5,6,7};
    vector<int> lvec;
    copy(lst.cbegin(), lst.cend(), back_inserter(lvec));

    return 0;
}
