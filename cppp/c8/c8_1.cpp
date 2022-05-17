
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ofstream of("hello.txt", ios::binary);
    of << "hello" << " " << " world ";
    of << endl;
    cout << "hi" << endl;  //hi and newline
    cout << "hi" << flush; // jsut flush 
    cout << "hi" << ends;  //hi and null

    cout << unitbuf;
    cout << "hi" << endl;
    cout << nounitbuf;

    if(cin.tie())
        cout << "cin tie" << endl;
    else
        cout << "cin do not tie" << endl;

    cin.tie(nullptr);
    cout << "clear the tie, and try again" << endl;

    if(cin.tie())
        cout << "cin tie" << endl;
    else
        cout << "cin do not tie" << endl;
    return 0;
}
