//=============================================================
//Quick sort
//=============================================================
#include <iostream>
using namespace std;
int part(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }while(i<j);
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quick_sort(int arr[],int low,int high){
    int pv;
    if(low<high){
        pv=part(arr,low,high);
        quick_sort(arr,0,pv-1);
        quick_sort(arr,pv+1,high);
    }
}

int main(){
    int arr[]={2,3,8,9,6,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    quick_sort(arr,0,s-1);
    cout<<"\nAfter quick\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}