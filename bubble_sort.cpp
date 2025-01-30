#include<iostream>
using namespace std;
void bubble(int a[],int s)
{
   int tmp;
   int count =0;
   bool flag;
   for(int i=0; i<s; i++)
   {
    flag = true;
    for(int j=0; j<s; j++)
    {
        if(a[j]>a[j+1])
        {
            tmp = a[j+1];
            a[j+1] = a[j];
            a[j] = tmp;
            flag = false;
        }
    }
    if(flag==true)
    {
        break;
    }
   }
   cout<<"Count = "<<count<<"\n";
   for(int i =0; i<s; i++)
   {
    cout<<a[i]<<"\t";
   }
}
int main()
{
    int arr[] = {1,2,9,5,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"after bubble sort\n";
    bubble(arr,s);
}