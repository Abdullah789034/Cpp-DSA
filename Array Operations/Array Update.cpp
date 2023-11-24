#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,45,3};
   int n=5,chng=23,index=1;
   cout<<"Before Update";
   for (int i = 0; i < 5; i++)
   {
        cout<<endl;
      cout<<arr[i];
   }
   arr[index]=chng;
   
   cout<<"\nAfter Update";
   for (int i = 0; i < n; i++)
   {
      cout<<endl;
      cout<<arr[i];
   }
    return 0;
}