#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> qu;

int main(){
   cin.tie(nullptr);
   ios::sync_with_stdio(false);
   cin>>n;

   for(int i=1; i<=n; i++){
       qu.push(i);
   }

   while(qu.size()>1){
    qu.pop();

    int x = qu.front();
    qu.pop();        
    qu.push(x);
}

   cout<<qu.front();
}