#pragma once

#include <string>

class Account {
public:
    void calculate() {amount += amount * interestRate;}
    static double rate() {return interestRate;}
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
    //static const double dper = 11.0; //just for intergral
    static const int xper = 11;
    static constexpr int period = 30;
    double daily_tbl[period];
};

////////////////////////////////////////////////////////////////////////////////

class Bar {
public:

private:
    static Bar mem1;
    Bar *mem2;
    //Bar mem3;
};