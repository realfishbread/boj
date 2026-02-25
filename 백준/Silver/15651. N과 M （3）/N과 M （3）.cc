#include <iostream>
using namespace std;

int n,m;
int seq[9];

void dfs(int depth){
    if(depth==m){
        for(int i=0; i<m; i++){
            cout<<seq[i]<<(i+1==m ? "\n" : " ");
        }
        return;
    }
    
    for(int x=1; x<=n; x++){
        seq[depth]=x;
        dfs(depth+1);
    }
}

int main() {
    cin>>n>>m;
    dfs(0);
    
    return 0;
}