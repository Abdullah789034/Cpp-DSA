#include <iostream>
using namespace std;

int binarySearch(int arr[],int num, int n, int low,int high){

    while (low<=high)
    {
        int mid=low + (high - low) / 2;

        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]<num){
            low=mid+1;
        }
        if(arr[mid]>num){
           high=mid-1;
        }
    }
    return -1;
    
}


int main(){
    int arr[5]={1,4,2,5,4};
    int num=5, n=5;
    int low=0, high=n-1;
    int res=binarySearch(arr,num,n,low,high);
    cout<<res;
    return 0;
}