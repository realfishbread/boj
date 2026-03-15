#include <iostream>

#include <climits>

using namespace std;

int n;

char buho[4] = {'+', '-', '*', '/'};
int save[4];
int num[101];

long long MAX = LLONG_MIN;
long long MIN = LLONG_MAX;

void dfs(int depth, int save1, int save2, int save3, int save4, long long current) {
long long Nextnum;

    if (depth == n - 1) {
        if (MAX < current)
            MAX = current;
        if (MIN > current)
            MIN = current;
        return;
    }
    if(save1>0){
        Nextnum = current + num[depth+1];
        dfs(depth+1, save1-1,save2, save3, save4, Nextnum);
     }
    if(save2>0){
        Nextnum = current - num[depth+1];
        dfs(depth+1, save1, save2-1, save3, save4, Nextnum);
     } 
    if(save3>0){
       Nextnum = current * num[depth+1];
       dfs(depth+1, save1, save2, save3-1, save4, Nextnum);
     }
    if(save4>0) { 
      Nextnum = current / num[depth+1];
      dfs(depth+1, save1, save2, save3, save4-1, Nextnum);
   }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> save[0] >> save[1] >> save[2] >> save[3];
    dfs(0, save[0], save[1], save[2], save[3], num[0]);
    cout<< MAX << '\n' <<MIN;
    return 0;
} 