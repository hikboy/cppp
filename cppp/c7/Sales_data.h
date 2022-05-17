#pragma once

#include <iostream>

class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);

public:
    Sales_data(const std::string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) {}
    //Sales_data() = default;
    //Sales_data(const std::string &s): bookNo(s) {}
    //Sales_data(std::istream&);

    Sales_data(): Sales_data("", 0, 0) {}
    explicit Sales_data(const std::string &s): Sales_data(s, 0, 0) {}
    explicit Sales_data(std::istream &is): Sales_data() {read(is, *this);}

    //explicit constructors can be used only for direct initialization
    // Sales_data item1 (null_book); // ok
    // Sales_data item2 = null_book; // error 
    // item.combine(Sales_data(null_book));
    // item.combine(static_cast<Sales_data>(cin))

    std::string isbn() const {return bookNo;}

    Sales_data& combine(const Sales_data&);
    double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);

std::ostream &print(std::ostream&, const Sales_data&);

std::istream &read(std::istream&, Sales_data&);