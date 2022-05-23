#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    deque<string> ds;
    
    string words;

    while(cin >> words)
        ds.push_back(words);
    
    cout << "ds size is : " << ds.size() << endl;

    for(auto it = ds.cbegin(); it != ds.cend(); it++)
        cout << *it << endl;

    vector<int> svec;

    //cout << svec[0] << endl; // Segmentation fault
    //cout << svec.at(0);

    svec.insert(svec.begin(), {1,2,3,4,5,6,7,8});

    for(auto i = svec.begin(); i != svec.end(); i++) {
       cout << *i << " " ;
    }
    cout << endl;

    /////svec.emplace(svec.end(), {10,11,12,13});
    svec.emplace(svec.end(), 10);

    for(auto i = svec.begin(); i != svec.end(); i++) {
       cout << *i << " " ;
    }
    cout << endl;
    cout << "svec.size() is " << svec.size() << endl;

    svec.erase(svec.begin(), svec.begin());

    cout << "svec.size() is " << svec.size() << endl;
    return 0;
}