
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ofstream f1("hi.txt");
    if(f1)
        cout << "f1 is open succ" << endl;
    f1 << "hi hi" << endl;
    if(f1.is_open())
        cout << "f1 is open now" << endl;
    //f1.close();

    //ofstream app("hi.txt", ofstream::app);
    ofstream app("hi.txt", ofstream::app);
    if(app)
        cout << "open app is success" << endl;

    return 0;
}