#include <iostream>

using namespace std;

int n,m;
int seq[9];

void dfs(int depth, int start){
if(depth==m){
 for(int i=0; i<m; i++){
  cout<<seq[i]<<(i+1 == m?'\n' : ' ');
 }
  return;
}

for(int x= start; x<=n; x++){
    seq[depth]=x;
    dfs(depth +1, x+1);
  }
}

int main(){
    cin>>n>>m;
    dfs(0,1);
    return 0;
}