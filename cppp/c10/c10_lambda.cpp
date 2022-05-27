#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main(void)
{
    auto f = [] {return 42;};
    auto ishort = [] (const string &a, const string &b)
                    { return a.size() < b.size(); };
    cout << f() << endl;

    ifstream s("../data/story.txt");
    vector<string> vs;
    string ts;
    while(s >> ts)
        vs.push_back(ts);
    
    sort(vs.begin(), vs.end());
    auto uni_end = unique(vs.begin(), vs.end());
    vs.erase(uni_end, vs.end());

    for(const auto &s : vs)
        cout << s << " ";
    cout << endl;

    stable_sort(vs.begin(), vs.end(), ishort);

    for(const auto &s : vs)
        cout << s << " ";
    cout << endl;

    int sz = 5;

    auto wc = find_if(vs.begin(), vs.end(), [sz](const string &a){ return a.size() >= sz; });
    cout << "count is : " << vs.end() - wc << endl;

    for_each(wc, vs.end(), [](const string &s){cout << s << ' ';});
    cout << endl;

    ostream &os = cout;
    char c = ',';

    for_each(wc, vs.end(), [&os, c](const string &s){ os << s << c;});
    cout << endl;

    for_each(wc, vs.end(), [=](const string &s){cout << s << c;});
    cout << endl;

    for_each(wc, vs.end(), [&, c](const string &s){os << s << c;});
    cout << endl;

    for_each(wc, vs.end(), [=, &os](const string &s){os << s << c;});

    size_t vvt = 42;
    auto f2 = [&vvt] {return vvt;};
    vvt = 0;

    cout << f2() << endl;

    auto f3 = [c] () mutable {return c+ 5;};
    cout << "c is "<< c+0 << " after is  " << f3() << endl;

    vector<int> nvec {-1,-2,-3,-4};

    // good way 
    // transform(nvec.begin(), nvec.end(), nvec.begin(), 
    //           [](int i) {return i<0? -i: i;});

    //should be error!!!  but why it runs ok?
    //transform(nvec.begin(), nvec.end(), nvec.begin(), 
    //           [](int i) {cout << "runs ok" << endl; if(i<0) return -i; else return i; });
    
    transform(nvec.begin(), nvec.end(), nvec.begin(), 
                [](int i) -> int 
                {if(i<0) return -i; else return i;});

    for(auto &v : nvec)
        cout << v << endl;

    return 0;
}