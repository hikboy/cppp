#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    vector<string> v5{"hi"};
    cout << "v5 num " << v5.size() << endl;

    // vector<string> v6("hi");
    vector<string> v7{10};
    cout << "v7 num " << v7.size() << endl;

    vector<string> v8{10, "hi"};
    cout << "v8 num " << v8.size() << endl;

    return 0;
}