//Time complexity
//best or avg or worst - n*log(n)

//space complexity
//O(n)
//===========================================
//merge sort
//===========================================
#include <iostream>
using namespace std;
void combine(int arr[], int low, int mid, int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int bk[high+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            bk[k]=arr[i];
            i++;
            k++;
        }
        else{
            bk[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        bk[k]=arr[i];
            i++;
            k++;
    }
    while(j<=high){
        bk[k]=arr[j];
            j++;
            k++;
    }
    for(int i=low;i<k;i++){
        arr[i]=bk[i];
    }
}
void merge_sort(int arr[],int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        combine(arr,low,mid,high);
    }
}
int main(){
    int arr[]={9,2,3,1,6,5};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nAfter merge sort\n";
    merge_sort(arr,0,s-1);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }

}