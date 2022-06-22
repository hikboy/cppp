
#pragma once

#include <vector>
#include <memory>
#include <initializer_list>

class strBlobPtr;
class strBlob {
    friend class strBlobPtr;
public:
    strBlobPtr begin();
    strBlobPtr end();

    typedef std::vector<std::string>::size_type size_type;
    strBlob();
    strBlob(std::initializer_list<std::string> il);
    strBlob(const strBlob& l){
        data = l.data;
    }

    strBlob &operator=(const strBlob& l){
        data = l.data;
        return *this;
    }

    ~strBlob(){};
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const std::string &t)
        {data->push_back(t);}
    void pop_back();
    std::string & front();
    const std::string & front() const;
    std::string & back();
    const std::string & back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;

};

class strBlobPtr {
public:
    strBlobPtr(): curr(0) {}
    strBlobPtr(strBlob &a, size_t sz = 0):
        wptr(a.data), curr(sz) {}
    std::string& deref() const;
    strBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};
