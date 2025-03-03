//pair & Tuple....in vector

// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     pair<int, string>p1;
//     p1=make_pair(100,"rb");
//     cout<<"Roll no="<<p1.first<<"\t";
//     cout<<"Name="<<p1.second<<"\t";
// }

//.........................................................................

// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     vector<pair<int,string>>v;
//     int roll,n;
//     string name;
//     cout<<"Enter how meny records\n";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"Enter Roll No.\n";
//         cin>>roll;
//         cout<<"Enter Name\n";
//         cin>>name;
//         //v.push_back(make_pair(roll,name));
//         v.push_back({roll,name});

//     }
//        cout<<"Result are\n";
//        for(int i=0;i<v.size();i++)
//        {
//         cout<<v[i].first<<":"<<v[i].second<<"\n";
//        }
  
// }


//Tuple................................................................


#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
int main()
{
   tuple<int,string,int>student{10,"Rb",98};
   //student=make_tuple(10,"Rb",98);
   cout<<"Roll no="<<get<0>(student)<<"\n";
   cout<<"Name="<<get<1>(student)<<"\n";
   cout<<"Marks="<<get<2>(student)<<"\n";
}