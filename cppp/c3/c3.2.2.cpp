#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    string s ("Hello World!");
    decltype(s.size()) i = 0;

    for(auto c : s)
        if(ispunct(c))
            ++i;    
    cout << i << endl;

    for(auto c : s){
        c = toupper(c);
        cout << c << endl;
    }

    for(auto &c : s){
        c = toupper(c);
    }
    cout << s << endl;

    if(!s.empty())
        cout << s[0] << endl;
    return 0;
}