#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mp{{100,"Rb"},{101,"Chauhan"},{102,"Raja"}};
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";

    }
    map<string,int>stu{{"Raja",22},{"Sanju", 20},{"Rohit",25}};
    for(auto age:stu)
    {
        cout<<age.first<<":"<<age.second<<"\n";
    }
    map<int,string>ex;
    ex.insert({30,"Hii"});
    ex.insert({11,"Hlw"});
    ex.insert({12,"Hi"});
    ex.insert({19,"Hello"});
    ex[32]="Amit";
    ex[60];
    ex[60];
    for(auto exm:ex)
    {
        cout<<exm.first<<":"<<exm.second<<"\n";
    }

}