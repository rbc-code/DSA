#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nEnter How Many Records\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter Roll No.\n";
        cin>>roll;
        cout<<"Enter Name\n";
        cin>>name;
        mp.insert({roll,name});
    }
    cout<<"\nRecords Are\n";
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";

    }
   
}