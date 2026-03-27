#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string s;
int cnt;
unordered_set<string> duplicate;

int main(){
    cin>>s;
    
    for(int i=0; i<s.length(); i++){
        for(int len=1; len<=s.length()-i; len++){
            duplicate.insert(s.substr(i,len));
        }
    }
    
    cout<<duplicate.size();
}