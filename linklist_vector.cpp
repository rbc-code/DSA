#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<vector<int>>v;
    int row,col;
    int val;
    cout<<"Enter Row\n";
    cin>>row;
    cout<<"Enter Colum\n";
    cin>>col;
    for(int i=0; i<row; i++)
    {
        vector<int>v2;
        for(int j=0; j<col; j++)
        {
            cout<<"Enter value\n";
            cin>>val;
            v2.push_back(val);
        }
        v.push_back(v2);
    }
    cout<<"Store values in 2nd vector\n";
    for(int i=0; i<v.size();i++)
    {
        for(int j=0; j<v[i].size();j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<"\n";
    }
}