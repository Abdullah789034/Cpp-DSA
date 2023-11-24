#include <iostream>
using namespace std;
int main(){
    int arr[8]={3,2,42,5,68,4,2,4};
    int s=2;

    cout<<"Elements";
   for (int i = 0; i < 7; i++)
   {
        cout<<endl;
      cout<<arr[i];
   }

   cout<<"\nElement to search:"<<s;
   for (int i = 0; i < 7; i++)
   {
    if (arr[i]==s)
    {
        cout<<"\nElement found at:"<<i;
    }
    
   }
   
    return 0;
}