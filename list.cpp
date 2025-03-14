#include<iostream>
using namespace std;
#include<list>
#include<algorithm>  //find function
int main()
{
    list<int>l1;
    l1.push_front(9);
    l1.push_front(30);
    l1.push_back(50);
    for(auto p:l1)
    {
        cout<<p<<"\t";
    
    }
    cout<<"After delete\n";
    for(auto p:l1)
    {
        cout<<p<<"\t";
    }
    
    l1.pop_front();
    l1.pop_back();

}
