
// auto newCallable = bind(callable, arg_list);

#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
using namespace placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

ostream &print(ostream &os, const string &s, char c)
{
    return os << s << c;
}

int main(void)
{
    //auto check_size = [](const string &a, string::size_type sz) -> bool {};

    //std::placeholders::_1
    auto check6 = bind(check_size, _1, 6);

    string sc {"hello"};

    bool b1 = check6(sc);

    ifstream s("../data/story.txt");
    vector<string> vs;
    string ts;
    while(s >> ts)
        vs.push_back(ts);

    sort(vs.begin(), vs.end());

    auto uni_end = unique(vs.begin(), vs.end());

    vs.erase(uni_end, vs.end());

    string::size_type sz = 5;
    auto wc = find_if(vs.begin(), vs.end(), 
                        bind(check_size, _1, sz));

    cout << "numbers are " << vs.end() - wc << endl;

    for(const auto &a : vs)
        cout << a << " ";
    cout << endl;

    ostream &os = cout;
    //error
    //for_each(vs.begin(), vs.end(), bind(print, os, _1, ' '));

    for_each(vs.begin(), vs.end(), bind(print, ref(os), _1, ' '));

    return 0;
}
