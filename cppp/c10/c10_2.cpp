#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());

}

int main(void)
{
    ifstream s("../data/story.txt");
    vector<string> vs;
    string ts;
    while(s >> ts)
        vs.push_back(ts);

    for(auto i = vs.begin(); i != vs.end(); i++)
        cout << *i << endl;
    
    cout << "vs.size is " << vs.size() << endl;

    elimDups(vs);

    cout << "vs.size is " << vs.size() << endl;

    return 0;
}