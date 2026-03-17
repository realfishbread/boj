
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int n;
int m;
unordered_set<string> s;

int cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    
    for(int i=0; i<n; i++){
        string input;
        cin>>input;
        s.insert(input);
    }
    
    
    for(int i=0; i<m; i++){
        string input;
        cin>>input;
        if(s.find(input)!=s.end()) cnt++;
    }
    
    cout<<cnt;
    
}