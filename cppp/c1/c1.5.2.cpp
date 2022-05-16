
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    Sales_item item, sumitem;

 //   #define T1 u123
  //  #define T2 U123
  //  #define T3 L123
  //  #define T4 u123
    #define T5 123u
    #define T6 123U
    #define T7 123l
    #define T8 123L
    #define T9 123ul
    #define T10 123UL
    #define T11 123ll
    #define T12 123LL
    #define T13 123ull
    #define T14 123ULL
    #define T15 123.0
    #define T16 123.0f
    #define T17 123.0F
    #define T18 123.0l
    #define T19 123.0L
    //#define T20 \7
    #define T21 \0
    #define T22 \115
    #define T23 L'a'
    #define T24 u8'a'

   // int t1 = T1;
   // int t2 = T2;
   // int t3 = T3;
    //int t4 = T4;
    int t5 = T5;
    int t6 = T6;
    int t7 = T7;
    int t8 = T8;
    int t9 = T9;
    int t10 = T10;
    int t11 = T11;
    int t12 = T12;
    int t13 = T13;
    int t14 = T14;
    int t15 = T15;
    int t16 = T16;
    int t17 = T17;
    int t18 = T18;
    int t19 = T19;
   // int t20 = T20;
   // int t21 = T21;
   // int t22 = T22;
   // int t23 = T23;





    std::cin >> sumitem;

    while(std::cin >> item){
        if(sumitem.isbn() == item.isbn()){
            sumitem += item;
        }else{
            std::cout << sumitem << std::endl;
            sumitem = item;
        }
    }
    std::cout << sumitem << std::endl;

    return 0;
}