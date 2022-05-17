
#include <iostream>
#include "Screen.h"
#include "Window_mgr.h"

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

    return 0;
}