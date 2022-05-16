
#include <vector>

using namespace std;

void use_vector(void)
{
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v2 = v1;
    vector<int> v3(8, 100);
    vector<int> v4(9);
    vector<int> v5{1,2,3,4,5};
    vector<int> v6 = {1,2,3,4,5};

    v1.reserve(10);
}



