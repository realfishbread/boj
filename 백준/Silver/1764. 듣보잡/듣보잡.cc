#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int n,m; //듣도 못한 사람의 수 n, 보도 못한 사람의 수 m
unordered_map<string, int> name;
int cnt;
string cntpeople[500001];
int savenum;

int main()
{
    cin>>n>>m;
    
    for(int i=0; i<n; i++){
        string input;
        cin>>input;
        name[input]++;
    } // 듣도 못한 사람
    
    for(int i=0; i<m; i++){
        string input;
        cin>>input;
        if(name.find(input) !=name.end()){
            cnt++;
            cntpeople[savenum]=input;
            savenum++;
            
        }
        name[input]++;
        
    } // 보도 못한 사람
    
    sort(cntpeople, cntpeople+savenum);
    
    cout<<cnt<<'\n';
    
    for(int i=0; i<savenum; i++){
        
        cout<<cntpeople[i]<<'\n';
    }
}