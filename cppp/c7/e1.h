
#pragma once

#include <vector>

class e1 {
public:
    static int rate;
    static const int vecSize  = 20;
    //static vector<double> vec(vecSize);
};

class Bar {
public:

private:
    static Bar mem1;
    Bar * mem2;
    //Bar mem3;
};

class Screen {
public:

    Screen & clear(char = bkground);
private:
    static const char bkground;
};