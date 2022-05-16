
#include "Screen.h"


inline Screen &Screen::move(pos r, pos c)
{
    pos row = r* width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos ht, pos wd) const
{
    pos ros = r* width;
    return contents[row+c];
}