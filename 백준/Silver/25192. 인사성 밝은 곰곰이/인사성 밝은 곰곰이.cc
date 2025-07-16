#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){

    int n; cin>>n;

    set<string> s;
    
    int cnt=0;


    for (int i=0; i <n; i++){
        string input;
        cin >> input;
       if(input == "ENTER"){
        s.clear();
       }else{
        
        if(s.find(input)== s.end()){
            s.insert(input);
            cnt++;
        } 
       
        
       }
    }
    cout<< cnt;
}