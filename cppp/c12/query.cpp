
#include <iostream>
#include <fstream>
#include "TextQuery.h"
//#include "QueryResult.h"

using namespace std;

string make_plural(size_t ctr, const string &word,
                               const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    while(true){
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

ostream &print(ostream & os, const QueryResult &qr)
{
    os << qr.sought << "occurs" << qr.lines->size() << " "
        << make_plural(qr.lines->size(), "time", "s");
    
    for(auto num: *qr.lines)
        os << "\t(line " << num+1 << ")"
            << *(qr.file->begin() + num) << endl;
    return os;
}

int main(void)
{
    ifstream in("../data/words.txt");
    runQueries(in);
    return 0;
}