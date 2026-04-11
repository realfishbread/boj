#include <iostream>
#include <queue>

using namespace std;

int n;
queue<int> qu;

int main(){

    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    cin>>n;

    for(int i=0; i<n; i++){
         string input;
         cin>>input;
         if(input =="push"){
             int inputNum;
             cin>>inputNum;
             qu.push(inputNum);
         }else if(input =="front"){
             if(qu.empty()){
                cout<<-1<<'\n';
             }else cout<<qu.front()<<'\n';
         }else if(input == "back"){
             if(qu.empty()){
                 cout<<-1<<'\n';
             }else cout<<qu.back()<<'\n';
         }else if(input =="size"){
             cout<<qu.size()<<'\n';
         }else if(input =="empty"){
             if(qu.empty()) cout<<1<<'\n';
             else cout<<0<<'\n';
         }else if(input =="pop"){
             if(qu.empty()){
                cout<<-1<<'\n';
             }else{
               cout<<qu.front()<<'\n';
               qu.pop();
             }
         }
    }
}