#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for (int s = 0; s < size; s++)
    {
        for (int i = 0; i < size-s; i++)
        {
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        
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
    bubbleSort(arr,n);

    //After Sort
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}