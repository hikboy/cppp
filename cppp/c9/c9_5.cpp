
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    const char *cp = "Hello world!!!";
    char noNull[] = {'H', 'i'};

    string s1(cp);
    string s2(noNull, 2);
    //string s3(noNull);
    string s4(cp + 6, 5);
    string s5(s1, 6, 5);
    string s6(s1, 6);
    string s7(s1, 6, 20);
    //string s8(s1, 16);

    string s("hello world");
    string ss2 = s.substr(0,5);
    string ss3 = s.substr(6);
    string ss4 = s.substr(6,11);
    //string ss5 = s.substr(12);

    s.insert(s.size(), 5, '!');
    s.erase(s.size() - 5, 5);

    const char *cp1 = "Stately, plump Buck";
    s.assign(cp1, 7);
    s.insert(s.size(), cp1+7);

    string numbers("0123456789"), name("rr3d2");
    auto pos = name.find_first_of(numbers);
    cout << "pos is : " << pos << endl;

    string dept("02714p3");
    auto pos1 = dept.find_first_not_of(numbers);
    cout << "pos is : " << pos1 << endl;

    string::size_type pos2 = 0;

    while((pos2 = name.find_first_of(numbers, pos2)) != string::npos){
        cout << "found index:  " << pos << " element is " << name[pos2] << endl;
        ++pos2;
    }

    string river("MMississippi");
    auto first_pos = river.find("is");
    auto last_pos = river.rfind("is");

    cout << " first find: " << first_pos << endl;
    cout << " last find: " << last_pos << endl;

    deque<int> dvv {1,2,3,4,5,6};
    stack<int> stk(dvv);

    while(!stk.empty()){
        cout << stk.top() << ' ' ;
        stk.pop();
    }
    cout << endl;

    vector<int> ivv {1,2,3,4,5,6};
    stack<int, vector<int>> std1(ivv);

    while(!std1.empty()){
        cout << std1.top() << ' ' ;
        std1.pop();
    }
    cout << endl;

    queue<int> que;
 
    for(auto ix = 0; ix != 6; ix++){
        que.push(ix);
    }

    cout << "test queue" << endl;
    while(!que.empty()){
        cout << que.front() << ' ' << endl;
        cout << que.back() << ' ' << endl;
        que.pop();
    }
    cout << endl;


    

    return 0;
}