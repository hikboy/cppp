
#include <iostream>
#include <sstream>
#include <fstream>
#include "PersonInfo.h"

using namespace std;

int main(void)
{
    string line, word;
    vector<PersonInfo> people;
    ifstream f1("../data/d1.txt");

    auto state = f1.rdstate();
    cout << "f1 state is " << state << endl;

    if(f1.good())
        cout << "f1 is good" << endl;

    if(f1.bad())
        cout << "f1 is bad" << endl;

    if(f1)
        cout << "open f1 success" << endl;
    else    
        cout << "open f1 failed" << endl;

    while(getline(f1, line)){
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
        //cout << "line: " << line << endl;
    }
    return 0;
}