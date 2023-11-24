#include <iostream>
using namespace std;
int main(){
   int arr[5]={};
   cout<<"Before insertion";
   for (int i = 0; i < 5; i++)
   {
      cout<<arr[i]<<"\n";
   }
   cout<<"After insertion";
   for (int i = 0; i < 5; i++)
   {
      cout<<endl;
      arr[i]=i+i;
      cout<<arr[i];
   }
   return 0;
}