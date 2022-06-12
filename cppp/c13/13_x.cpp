
#include <iostream>
#include <vector>

using namespace std;

struct X {
    X() {cout << "X()" << endl;}
    X(const X&) {cout << "X(const X&)"<<endl;}
    ~X() {cout << "~X() " << endl;}
    X& operator=(const X&){
        cout << "operator=" << endl;
        return *this;
    }

};

void pass_x_ref(X& p) {}
void pass_x_val(X p) {}

int main(void)
{
    X a;
    cout << "pass by ref :" << endl;
    pass_x_ref(a);
    cout << "pass by val :" << endl;
    pass_x_val(a);
    //cout << "pass by val over!" << endl;
    cout << "start to test vector" << endl;
    #if 0
    vector<X> vecX(10);
    vecX.push_back(a);
    vecX.push_back(a);
    vecX.push_back(a);
    vecX.push_back(a);
    vector<X> vecX{a,a};
    #endif
    vector<X> b;

    cout << "test over!" << endl;
    return 0;
}
