#include<iostream>
using namespace std;
#include<vector>
#include<stack>
int main()
{
   stack<int>st;
   st.push(12);
   st.push(11);
   st.push(66);
   st.push(4);
   cout<<"Result="<<st.empty()<<"\n";
   cout<<st.top()<<"\n";
   while(!st.empty())
   {
    cout<<st.top()<<"\n";
    st.pop();
   }
   cout<<"Result="<<st.empty()<<"\n";
}