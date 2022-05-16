#include <iostream>
#include <vector>

using namespace std;    

int main(void)
{
    int sum=0;
    for(int i=-100;i<=100;i++)
    {
        sum+=i;
    }
    cout<< "sum is "<<sum<<endl;
    cout << " sizeof(int) is   " << sizeof(sum) << endl;

    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout << endl;

    v.push_back(5);

    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        cout<<*iter<<" ";
    }
    cout << endl;

    v.pop_back(); 
    v.pop_back(); 
    v.pop_back(); 
    v.pop_back(); 
    v.pop_back(); 
    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        cout<<*iter<<" ";
    }
    cout << endl;
    
    return 0;
}