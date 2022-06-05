
#include <vector> 
#include <string>
#include <initializer_list>
#include"strBlob.h"

using namespace std;

strBlob::strBlob():data(make_shared<vector<string>>()){}

strBlob::strBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}

void strBlob::check(size_type i, const string &msg) const
{
    if(i > data->size())
        throw out_of_range(msg);
}

string& strBlob::front()
{
    check(0, "front on empty strBlob");
    return data->front();
}

const string& strBlob::front() const
{
    check(0, "front const on empty strBlob");
    return data->front();
}

string& strBlob::back()
{
    check(0, "back on empty strBlob");
    return data->back();
}

const string& strBlob::back() const
{
    check(0, "back const on empty strBlob");
    return data->back();
}

void strBlob::pop_back()
{
    check(0, "pop_back on empty strBlob");
    data->pop_back();
}
