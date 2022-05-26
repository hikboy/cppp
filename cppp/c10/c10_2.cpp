#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    for(auto i = words.begin(); i != words.end(); i++)
        cout << *i << ' ';
    cout << endl;

    auto end_unique = unique(words.begin(), words.end());
    for(auto i = words.begin(); i != end_unique; i++)
        cout << *i << ' ';
    cout << endl;

    cout << "the size of words is " << words.size() << endl;
    // why why
    for(const auto &s : words)
        cout << s << ' ';
    cout << endl;

    for(auto i = end_unique; i != words.end(); i++)
        cout << *i << ' ';
    cout << endl;

    words.erase(end_unique, words.end());
    for(const auto &s : words)
        cout << s << ' ' ;
    cout << endl;

    stable_sort(words.begin(), words.end(), isShorter);
    for(const auto &s : words)
        cout << s << ' ' ;
    cout << endl;

}


void elimDups1(vector<string> &words)
{
    sort(words.begin(), words.end(), isShorter);
    for(auto i = words.begin(); i != words.end(); i++)
        cout << *i << ' ';
    cout << endl;

}

int main(void)
{
    ifstream s("../data/story.txt");
    vector<string> vs;
    string ts;
    while(s >> ts)
        vs.push_back(ts);

    for(auto i = vs.begin(); i != vs.end(); i++)
        cout << *i << ' ';
    cout << endl;

    cout << "vs.size is " << vs.size() << endl;

    //elimDups1(vs);

    elimDups(vs);


    cout << "vs.size is " << vs.size() << endl;

    return 0;
}

//
// [capture list] (parameter list) -> return type {function body}
//