#pragma once

#include <string>
#include <vector>
#include "Screen.h"

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    inline ScreenIndex addScreen(const Screen&);
private:
    std::vector<Screen> screens{Screen(24,80, ' ')};
};

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
    screens.push_back(s);
    return screens.size() - 1;
}