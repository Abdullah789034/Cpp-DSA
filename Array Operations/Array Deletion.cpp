#include <iostream>
using namespace std;
int main(){
   int arr[5]={1,3,2,45,3};
   int n=5,index=2;
   cout<<"Before deletion";
   for (int i = 0; i < 5; i++)
   {
        cout<<endl;
      cout<<arr[i];
   }
   for (int i = index; i < 5; i++)
   {
    arr[i]=arr[i+1];
   }
   n=n-1;
   
   cout<<"\nAfter deletion";
   for (int i = 0; i < n; i++)
   {
      cout<<endl;
      cout<<arr[i];
   }
   return 0;
}