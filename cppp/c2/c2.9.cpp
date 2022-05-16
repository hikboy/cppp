
#include <iostream>

int main()
{

    //int i = {3.14}; //why this is an error?
    //int k{3.14};

    //why this is only a warning?
    //long double ld = 3.14; 
    //int a{ld};

    long double ld = 3.14; 
    int a{ld};

    int b = {ld};
    int c(ld);
    int d = ld;

    int input_value;
    std::cin >> input_value; 
    //std::cin >> int input_value; 
    //double salary = wage = 9999.99;
    int j = 3.14;
    //extern int ll = 3.14;

    //int double = 3.14;
    int _;
    //int catch-22;
    int catch_22;
    //int 1_or_2 = 1;
    double Double = 3.14;

    return 0;
}