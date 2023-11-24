#include <iostream>
using namespace std;

int search(int arr[], int num , int n){
for (int i = 0; i < n; i++)
    {
        if(arr[i]==num){
           return i;
        }
        
    }
    return 0;

}


int main(){
    int arr[5]={1,3,5,32,4};
    int n=5, num=32;
    search(arr,num,n);
     cout<<"Find at index: "<<search(arr,num,n)<<endl;

    return 0;
}