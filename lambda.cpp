#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool cybrom(int a, int b)
{
    return a>b;
}
int main()
{
    vector<int>v{2,1,5,7,8,9};
    sort(v.begin(),v.end());
    for(auto p:v)
    {
        cout<<"\n";
    }
    cout<<[](int a, int b){return a>b;}(2,20);
    cout<<"\n";
    sort(v.begin(),v.end(),less<int>());
    sort(v.begin(),v.end(),greater<int>());
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});

}