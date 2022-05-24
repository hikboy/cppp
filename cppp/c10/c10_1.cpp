
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

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

    //auto r2 = equal(rouster1.cbegin(), rouster1.cend(), rouster2.cbegain());
    return 0;
}