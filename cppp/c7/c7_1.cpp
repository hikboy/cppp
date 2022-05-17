
#include <iostream>
#include "Screen.h"
#include "Window_mgr.h"
#include "Debug.h"
#include "Account.h"

int main(void)
{
    Screen::pos tt = 0;
    Screen::pos1 t1 = 0;

    Screen myscreen;
    char ch = myscreen.get();
    ch = myscreen.get(0,0);

    Window_mgr myWindow;

    myscreen.move(4,0).set('#');

    Screen myscreen1(5,3, '~');
    const Screen blank(5,3, '!');

    myscreen1.set('#').display(std::cout);
    blank.display(std::cout);

    constexpr Debug io_sub(false, true, false);

    if(io_sub.any())
        std::cerr << "print appropriate error message" << std::endl;

    constexpr Debug prod(false);
    if(prod.any())
        std::cerr << "print an error message" << std::endl;
    
    double r;
    r = Account::rate();

    return 0;
}