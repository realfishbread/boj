#include <iostream>
#include <unordered_set>
using namespace std;


int n,m;
unordered_set<int> A;
unordered_set<int> B;

int cnt;


int main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 cin>>n>>m;
 
  for(int i=0; i<n; i++){
      int input;
      cin>>input;
      A.insert(input);
  }

  for(int i=0; i<m; i++){
       int input;
       cin>>input;
       B.insert(input);
       if(A.find(input) != A.end()) cnt++;
  } //search

   cout<<n+m-2*cnt;
}




