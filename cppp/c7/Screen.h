#pragma once

#include <string>

void f();

class Screen {
    friend class Window_mgr;
    //friend class Window_mgr1;
    //friend void Window_mgr::clear(ScreenIndex); //must be careful structuring of our programs  cpppimer P365
    friend void f(){};
public:
    typedef std::string::size_type pos;
    using pos1 = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c):
        height(ht), width(wd), contents(ht * wd, c) {}
    char get() const
        {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

    Screen &set(char);
    Screen &set(pos, pos, char);

    const Screen &display(std::ostream &os) const
        { do_display(os); f(); return *this; }
    Screen &display(std::ostream &os)
        { do_display(os); return *this; }


private:
    void do_display(std::ostream &os) const {os << contents;}
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;
    //typedef std::string::size_type pos; //must before its use
};



inline Screen &Screen::move(pos r, pos c)
{
    pos row = r* width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r* width;
    access_ctr++;
    return contents[row+c];
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}

////////////////////////////////////////////////////////////////////////////////

class Link_screen {
    Screen window;
    Link_screen *next;
    Link_screen *prev;
};