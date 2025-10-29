#include <iostream>
using namespace std;

int main() {
    int n, m; cin>> n>>m;
    int* a= new int[n];
    for(int i=0; i<n; i++){
        a[i]=i+1;
    }

    int ch1, ch2;
    int save1,save2;
    for(int i=0; i<m; i++){
       cin>>ch1>>ch2;
       save1=a[ch1-1];
       save2=a[ch2-1];
       a[ch1-1]=save2;
       a[ch2-1]=save1;

    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}