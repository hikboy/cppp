#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v2;
    for(int i = 0; i < 1000; ++i)
        v2.push_back(i);
    cout << "vector v2 size is : " << v2.size() << endl;

    string word;

#if 0
    vector<string> text;
    while(cin >> word)
        text.push_back(word);

    cout << "text size is : " << text.size() << endl;

    for(auto s: text)
        cout << s << endl;
#endif

#if 0
    vector<int> intdata;
    while(cin >> word)
        intdata.push_back(stoi(word));
    
    cout << "intdata size is : " << intdata.size() << endl;

    for(auto i: intdata)
        cout << i << endl;

#endif

#if 0
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto &i : v)
        i *= i;
    for(auto i : v)
        cout << i << ' ';

    cout << endl;

    vector<unsigned> scores(11, 0);

    unsigned grade;
    cin >> grade;
    cout << "grade is " << grade << endl;
    if(grade < 100)
        cout << "grade is less than 100" << endl;
    else if(grade < 90) 
        cout << "grade is less than 90" << endl;    
    else ;
#endif

#if 0
    vector<int> ivec;
    for(decltype(ivec.size()) ix = 0; ix != 10; ++ix)
        ivec[ix] = ix; // this is an error
                       //should use: ivec.push_back(ix);
#endif

    string s("some thing");
    //string s {"some thing"};
    // if(s.begin() != s.end()){
    //     auto it = s.begin();
    //     *it = toupper(*it);
    // }
    // cout << s << endl;

    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    cout << s << endl;

    //vector<int>::size_type ix;
    //vector<int>::iterator it;
    //vector<int>::const_iterator cit;
    //string::const_iterator sit;
    //begin()
    //end()
    //cbegin()
    //cend()

    //difference_type


    auto mid = s.begin() + s.size() / 2;




    return 0;
}