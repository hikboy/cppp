
#include <iostream>
#include <forward_list>
#include <vector>

using namespace std;

int main(void)
{
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while(curr != flst.end()){
        if(*curr % 2)
            curr = flst.erase_after(prev);
        else{
            prev = curr;
            ++curr;
        }
    }

    vector<int> ivi;

    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    ivi.reserve(1024);

    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    cout << "push one data" << endl;
    ivi.push_back(1);

    cout << "out put: " << ivi[0] << endl;

    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    cout << "resize ivi" << endl;
    ivi.resize(5);
    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    ivi.reserve(10);
    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    ivi.resize(100);
    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    cout << "shrink to fit ivi" << endl;
    ivi.shrink_to_fit();
    cout << "ivi size : " << ivi.size() << endl;
    cout << "ivi capacity: " << ivi.capacity() << endl;

    return 0;
}