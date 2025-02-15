//============================================
//selection sort
//============================================
#include <iostream>
using namespace std;

void selection_sort(int arr[],int s){
    int c;
    for(int i=0;i<s;i++){
        c=i;
        for(int j=i+1;j<s;j++){
            if(arr[c]>arr[j]){
                c=j;
            }
        }
        if(c!=i){
            int temp=arr[i];
            arr[i]=arr[c];
            arr[c]=temp;
        }
    }
    cout<<"\nAfter selection\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={2,3,8,9,6,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    selection_sort(arr,s);
}