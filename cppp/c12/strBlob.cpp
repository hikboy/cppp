
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

strBlobPtr strBlob::begin() 
{
    return strBlobPtr(*this);
}

strBlobPtr strBlob::end() 
{
    auto ret = strBlobPtr(*this, data->size()); 
    return ret;
}

std::shared_ptr<std::vector<std::string>>
strBlobPtr::check(std::size_t i, const std::string &msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw std::runtime_error("unbound strBlobPtr");
    if(i>=ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& strBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

strBlobPtr& strBlobPtr::incr()
{
    check(curr, "increment past end of strBlobPtr");
    ++curr;
    return *this;
}