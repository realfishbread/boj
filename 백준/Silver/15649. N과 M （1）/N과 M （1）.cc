#include <iostream>
using namespace std;

int n, m;
int seq[9];
bool used[9];

void dfs(int depth){
    if(depth==m){ //지금까지 m개 뽑음
        for (int i=0; i<m; i++){ //숫자 나열
            cout<<seq[i]<<(i+1 ==m? '\n' : ' ');
        }
        return;
    }
    
    for(int x=1; x<=n; x++){
        if(!used[x]){ // 쓴 숫자 중복 방지, 안가본길 false일때만 진입 가능
            used[x]=true; //가봄 true 표시 - 숫자 선택함
            seq[depth] =x; //그 숫자를 seq[depth]에 넣는다
            dfs(depth +1); //숫자 넣었으니까 다음 숫자 뽑으러 다시 떠남
            used[x]=false;
        }
    }
}

int main()
{
     cin>>n>>m;
    
    dfs(0);
    
}