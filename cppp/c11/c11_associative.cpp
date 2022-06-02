
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <utility>

using namespace std;

pair<string, int>
process(vector<string> &v)
{
    if(!v.empty())
        return {v.back(), v.back().size()};
    else
        return pair<string, int>();
    
    return make_pair("",1);
}

bool compareIsbn(const int i, const int j)
{
    return i < j;
}

int main(void)
{
    vector<int> ivec;
    for(vector<int>::size_type i=0; i!=10; i++) {
        ivec.push_back(i);
        ivec.push_back(i);
    }

    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());

    cout << ivec.size() << endl;
    cout << iset.size() << endl;
    cout << miset.size() << endl;

    multiset<int, decltype(compareIsbn) *> comInt(compareIsbn);

    set<string>::value_type v1;
    set<string>::key_type v2;

    map<string, int>::value_type v3;
    map<string, int>::key_type v4;
    map<string, int>::mapped_type v5;

    map<string, int> imap {
        {"hello", 5},
        {"world", 6},
    };


    auto map_it = imap.begin();
    cout << map_it->first;
    cout << " " << map_it->second++;
    cout << " " << map_it->second++;
    cout << endl;


    set<int> iset1 {0,1,2,3,4,5,6};
    set<int>::iterator set_it = iset1.begin();

    if(set_it != iset.end()){
        // *set_it = 42; //can not write to set
        cout << *set_it << endl;
    }

    //multiset<string> c;
    set<string> c;
    vector<string> v;

    copy(v.begin(), v.end(), inserter(c, c.end()));
    //copy(v.begin(), v.end(), back_inserter(c));
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));

    vector<int> iivec = {2,4,6,8,2,4,6,8};
    set<int> set2;
    set2.insert(iivec.cbegin(), iivec.cend());
    cout << "set2's size is : " << set2.size() << endl;
    set2.insert({1,3,5,7,1,3,5,7});
    cout << "set2's size is : " << set2.size() << endl;

    imap.insert({"word", 1});
    imap.insert(make_pair("you", 2));
    imap.insert(pair<string, int>("are", 3));
    imap.insert(map<string, int>::value_type("me", 3));

#if 0
    map<string, int> word_cnt;
    string word;
    while(cin >> word){
        auto ret = word_cnt.insert({word, 1});
        if(!ret.second)
           ++ret.first->second; 
    }

    for(auto &p : word_cnt)
        cout << p.first << ' '  << p.second << endl;

    for(auto p : word_cnt)
        cout << p.first << ' '  << p.second << endl;
#endif

    multimap<string, string> authors;
    authors.insert({"Barth, John", "Sot-Weed Factor"});
    authors.insert({"Barth, John", "Lost in the Funhouse"});
    cout << "size of multi is " << authors.size() << endl;

    string remove_word {"Barth, John"};
    //string remove_word {"get"};
    if(authors.erase(remove_word))
        cout << "ok: " << remove_word << " removed\n";
    else
        cout << "oops: " << remove_word << " not found\n";

    map<string, size_t> w_c;
    w_c["anna"] = 1;
    //w_c.at("l") = 2; //out of range exception
    cout << "count is " <<  w_c.count("anna")  << endl;
    cout << "count is " <<  w_c.count("liu")  << endl;

    auto lit = w_c.lower_bound("ljb");
    auto uit = w_c.upper_bound("ljb");
    auto eit = w_c.equal_range("ljb");

    set<int> iiset {0,1,2,3,4,5,6,7};
    iiset.find(1);
    iiset.find(11);
    iiset.count(1);
    iiset.count(11);

    string search_item {"hello"};
    for(auto pos = authors.equal_range(search_item);
        pos.first != pos.second; 
        ++pos.first)
        cout << pos.first->second << endl;

    return 0;
}
