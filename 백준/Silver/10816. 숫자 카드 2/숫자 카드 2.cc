#include <iostream>
#include <unordered_map>
using namespace std;

int n;
int m;

unordered_map<int,int> arr;
int output[500001];

int main()
{
    cin>>n;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        arr[input]++;
        
    }
    cin>>m;
    for(int i=0; i<m; i++){
        int input;
        cin>>input;
        output[i]=arr[input];
    }
    
    for(int i =0; i<m; i++){
        cout<<output[i]<<' ';
    }
}