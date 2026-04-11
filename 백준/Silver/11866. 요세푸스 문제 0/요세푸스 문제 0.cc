#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue<int> qu;


int main(){

   cin.tie(nullptr);
   ios::sync_with_stdio(false);
   cin>> n>> k;

   for(int i=1; i<=n; i++){
      qu.push(i);
   }
 
   cout<<'<';

   while(!qu.empty()){
     for(int i=0; i<k-1; i++){
        int pointerNum = qu.front();
      
        qu.pop();
        qu.push(pointerNum);
      }
     if(qu.size() !=1){
        cout<<qu.front()<<", ";
        qu.pop();
     } else{ 
        cout<<qu.front()<<'>';
        qu.pop();
     }
   }
}