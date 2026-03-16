#include <iostream>
#include <algorithm>

using namespace std;

int arr[6];
int aver=0;
   
int main()
{
   
   
   for(int i=0; i<5; i++){
       cin>>arr[i];
       aver+=arr[i];
   }
   
   sort(arr, arr+5);
   
   cout<<aver/5<<'\n'<<arr[2];
}