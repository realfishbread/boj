
#include <iostream>
#include <string>
using namespace std;

string s;

int main()
{
   cin>>s;
   
   if(s.length()%2==1){
       for(int i=0; i<(s.length()/2+1); i++){
           if(s[i]!=s[s.length()-i-1]){
               cout<<0;
               return 0;
           }
       }
       cout<<1;
       return 0;
   }else if(s.length()%2==0){
       for(int i=0; i<(s.length()/2); i++){
           if(s[i]!=s[s.length()-i-1]){
               cout<<0;
               return 0;
           }
       }
       cout<<1;
       return 0;
   }
}