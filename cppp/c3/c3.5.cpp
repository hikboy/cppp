#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(void)
{
    int arry[10];
    int (* Parray)[10] = &arry;
    int (& Rarray)[10] = arry;

    //size_t  
    //header: <cstddef>

    int ia[] = {0,1,2,3,4,5,6,7,8,9} ;
    int *pbeg = begin(ia);
    int *pend = end(ia);

    //ptrdiff_t is a signed integral type.
    //header <cstddef>

    int int_arr[] = {0,1,2,3,4,5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    vector<int> ivec1(int_arr + 1, end(int_arr));

    int ai[8][9];
    size_t cnt = 0;
    for(auto &row_ : ai)
        for(auto &col : row_){
            col = cnt;
            ++cnt;
        }
    
    int (*p0)[9];
    p0 = ai;
    p0 = &ai[0];

    // *p0 stand for ai[0]  

    for(auto p = ai; p!=ai+8; ++p)
        for(auto q = *p; q != *p + 9; ++q)
            cout << *q << ' ';
    cout << endl;

    for(auto p = begin(ai); p!= end(ai); p++)
        for(auto q = begin(*p); q!= end(*p); ++q)
            cout << *q << ' ';
    cout << endl;

    //all are correct
    //using int_array_al = int[9];
    typedef int int_array_al[9];

    for(int_array_al *p = ai; p!= ai +8; ++p)
        for(int *q = *p; q!= *p + 9; ++q)
            cout << *q << ' ';
    cout << endl;


    return 0;
}