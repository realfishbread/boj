#include <iostream>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int* arr = new int[n]; 
    
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        for(int j=a-1; j<b; j++){
            int save = arr[j];
            arr[j]=arr[b-1];
            arr[b-1]=save;
            b--;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}