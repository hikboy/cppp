
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

int main(void)
{
    //unordered_map<string, size_t> word_count;
    map<string, size_t> word_count;
    set<string> exclude {"the", "a", "but"};
    string word;
    while(cin >> word)
        if(exclude.find(word) == exclude.end())
            ++word_count[word];
    
    for(const auto &w : word_count)
        cout << w.first << " occurs "  << w.second
             << ((w.second > 1) ? " times " : " time") << endl;
    if(word_count.find("find") == word_count.end())
        cout << "can not find, that is not in the map" << endl;
    return 0;
}

