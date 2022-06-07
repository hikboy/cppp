
#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

int main(void)
{
    allocator<string> alloc;
    auto const p = alloc.allocate(1);

    auto q = p;
    alloc.construct(q++);
    alloc.construct(q++, 10, 'c');
    alloc.construct(q++, "hi");

    while(q != p)
        alloc.destroy(--q);
    
    alloc.deallocate(p, 1);

    vector<string> vi;
    auto pp = alloc.allocate(vi.size() * 2);

    auto qq = uninitialized_copy(vi.begin(), vi.end(), pp);

    uninitialized_fill_n(qq, vi.size(), "hi");
    

    return 0;
}
