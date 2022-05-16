#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v1{1, 2, 3, 4, 5};

    auto beg = v1.begin();
    auto end = v1.end();
    auto mid = beg + (end - beg) / 2;
    int sought = 5;

    cout << "mid is " << *mid << endl;

#if 0
    while(mid != end && *mid != sought){
        if(*mid < sought){
            mid = beg + (mid - beg) / 2;
        }else{
            beg = mid + 1;
            mid = beg + (end - beg) / 2;
        }
    }

#endif

    while(mid != end && *mid != sought){
        if(*mid > sought){
            end = mid;
        }else{
            beg = mid + 1;
        }

        mid = beg + (end - beg) / 2;
    }

    return 0;
}