//===========================================================
//Insertion Sort
//===========================================================
#include <iostream>
using namespace std;

void insertionSort(int arr[], int s){
    for(int i=0;i<s;i++){
        int mn=i;
        while(mn>=0 && arr[mn]<arr[mn-1]){
            int temp;
            temp=arr[mn-1];
            arr[mn-1]=arr[mn];
            arr[mn]=temp;
            mn--;
        }
    }
    cout<<"\nAfter insertion\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={10,5,50,2,20};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<"\n"<<arr[i]<<"\t";
    }
    insertionSort(arr,s);
}