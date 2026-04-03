#include <iostream>
#include <unordered_map>

using namespace std;


int n,m;
unordered_map<string, string> a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;

    for(int i=0; i<n; i++){
         string input;
         string otherInput;
         cin>>input>>otherInput;
         
         a[input] =otherInput;
    }
     for(int i=0; i<m; i++){
          string input;
          cin>>input;
          cout<<a[input]<<'\n';
     }
}