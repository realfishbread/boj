#include <iostream>
using namespace std;

int main() {
    int n, m; cin>> n>>m;
    int* a= new int[n];

    int c,d,f;
    for(int i=0; i<m; i++){
        cin>>c>>d>>f;

        for(int j=c-1; j<d; j++){
            a[j]=f;
        }

    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}