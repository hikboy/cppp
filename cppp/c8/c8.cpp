
#include <iostream>

using namespace std;

int main(void)
{
    int ival;

    //if(cin >> ival)
    while(cin >> ival) {
        cout << "input stream state ok!" << endl;
        auto ostate = cin.rdstate();
        if(ostate & cin.goodbit)
            cout << "ok state goodbit " << endl;
    }

    cout << "input stream err!" << endl;

    auto ostate = cin.rdstate();

    if(ostate & cin.goodbit)
        cout << "state goodbit " << endl;

    if(ostate & cin.failbit)
        cout << "failbit err !" << endl;

    if(ostate & cin.badbit)
        cout << "badbit err !" << endl;

    if(ostate & cin.eofbit)
        cout << "eofbit err !" << endl;

    cout << "ostate is " << ostate << endl;

    if(cin.eof())
        cout << "eof err!" << endl;

    cin.clear();

    {

        auto ostate = cin.rdstate();
        if(ostate & cin.goodbit)
            cout << "state goodbit " << endl;
    }

    if(cin.good())
        cout << "fun good" << endl;

    cin.setstate(ostate);

    cout << "input val is: " << ival << endl;

    return 0;
}