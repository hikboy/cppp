#include <iostream>
using namespace std;

int main(void)
{
    string line;

    // while(getline(cin, line)){
    //     cout << line << endl;
    // }

    getline(cin, line);

    for(auto c : line)
        cout << c << endl;
    return 0;
}