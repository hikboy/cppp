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
    cout << svec.at(0);

    return 0;
}