#include <unordered_set>
#include <iostream>
using namespace std;


unordered_set<string> rainbow;
int n;

int main(){


     cin.tie(nullptr);
     ios::sync_with_stdio(false);
     cin>>n;

     for(int i=0; i<n; i++){
          string input;
          string input2;
          cin>>input>>input2;

          if(input == "ChongChong"){
             rainbow.insert(input2);
             rainbow.insert(input);

          }else if(input2=="ChongChong"){
             rainbow.insert(input2);
             rainbow.insert(input);

           }else if(rainbow.find(input) != rainbow.end() ||rainbow.find(input2) != rainbow.end()){
             rainbow.insert(input2);
             rainbow.insert(input);
           }
     }
   cout<<rainbow.size();
}