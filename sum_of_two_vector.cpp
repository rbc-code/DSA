#include<iostream>
using namespace std;
#include<vector>
int main()
{
  vector<int>v1{2,3,5};
  vector<int>v2{3,5,7};

  int total=0;
  for(int i=0;i<v1.size(); i++)
  {
     total=total+v1[i]+v2[i];
       
  }
  cout<<total;
}