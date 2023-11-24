#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for (int s = 0; s < size; s++)
    {
        int min=s;
        for (int i = s+1; i < size; i++)
        {
           if(arr[i]<arr[min]){
            min=i;
           }
        }
        swap(arr[s],arr[min]);
    }
    
}

void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
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
    selectionSort(arr,n);

    //After Sort
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}