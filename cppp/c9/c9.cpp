
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <array>

using namespace std;

int main(void)
{
    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();

    while(iter1 != iter2)
    {
        cout << "iter1 val: " << *iter1 << endl;
    }

    list<string> a = {"Milton", "Shakespeare", "Austen"};
    auto it1 = a.begin();
    auto it2 = a.end();
    auto it3 = a.rbegin();
    auto it4 = a.rend();
    auto it5 = a.cbegin();
    auto it6 = a.cend();
    auto it7 = a.crbegin();
    auto it8 = a.crend();

    vector<const char*> articles =  {"a", "an", "the"};
    vector<const char*> articles1 =  {"b", "c"};
    list<string> list2(a);
//    deque<string> authList(a);
//    vector<string> words(articles);
//    forward_list<string> words1(articles);
    forward_list<string> words(articles.begin(), articles.end());

    vector<int> ivec(10, -1);
    list<string> svec(10, "hi");
    forward_list<int> ivec1(10);
    deque<string> svec1(10);
    array<string, 10> iarray;
    array<int, 10>::size_type i;

    {
        auto it = articles.begin();
        while(it != articles.end()){
            cout << *it++ << endl;
        }
    }

    articles.assign(articles1.begin(), articles1.end());
    cout << "assign the container" << endl;

    {
        auto it = articles.begin();
        while(it != articles.end()){
            cout << *it++ << endl;
        }

    }

    cout << "assign the container again" << endl;

    articles.assign({"ljb", "hap", "zls"});

    {
        auto it = articles.begin();
        while(it != articles.end()){
            cout << *it++ << endl;
        }

    }

    cout << "assign the container again and again" << endl;
    articles.assign(10, "l");

    {
        auto it = articles.begin();
        while(it != articles.end()){
            cout << *it++ << endl;
        }

    }

    cout << "return from program" << endl;
    return 0;
}
