#include <iostream>
#include <set>
#include <string>
using namespace std;

int n;
set<string, greater<string>> arr;


int main(){
   cin>>n;

   for(int i=0; i<n; i++){
      string input, output;
      cin>>input>>output;
      if(output == "enter") arr.insert(input);
      else arr.erase(input);
   }
   
   for(string x : arr ){
      cout<<x<<'\n';
   }

}