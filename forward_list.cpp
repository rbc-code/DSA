#include<iostream>
using namespace std;
#include<forward_list>
int main()
{
 forward_list<int>f;
 f.push_front(23);
 f.push_front(22);
 f.push_front(90);
 f.push_front(28);
 f.push_front(20);
 f.push_front(30);
 f.push_front(1);
 f.push_front(90);
 f.push_front(22);
 f.sort();
 f.unique();
 for(auto p:f)
 {
    cout<<p<<"\t";
 }
 f.pop_front();
 cout<<"\nafter delete\n";
 for(auto p:f)
 {
    cout<<p<<"\n";
 }
 cout<<"\n merage \n";
 forward_list<int>f1{34,89,90,32,98,99};
 forward_list<int>f2{21,44,88,76,90,32};
 f1.sort();
 f2.sort();

 f1.merge(f2);
 for(auto p:f1)
 {
    cout<<p<<"\t";
 }



}