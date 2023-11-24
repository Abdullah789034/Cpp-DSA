#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for (int s = 1; s < size; s++)
    {
        int key=arr[s];
        int i=s-1;

        while (i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            --i;
        }
        arr[i+1]=key;
    }
    
}


int main(){
    int arr[8]={12,6,2,4,5,8,11,1};
    int n=8;

    //Before Sort
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    insertionSort(arr,n);

    //After Sort
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}