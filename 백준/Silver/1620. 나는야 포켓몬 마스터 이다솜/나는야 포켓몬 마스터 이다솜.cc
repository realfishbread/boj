#include <string>
#include <iostream>
#include <unordered_map>
#include <cctype>

using namespace std;

int n,m;// 포켓몬 개수 n 맞춰야하는 문제 수 m
unordered_map<string, int> pokemon;
//문자에서 숫자로 변환
unordered_map<int, string> pokemonNum;
//숫자에서 문자로 변환

int main(){

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
  
   cin>>n>>m;
   
   for(int i=0; i<n; i++){
      string input;
      cin>>input;
      pokemon[input] = i+1;
      pokemonNum[i+1] = input;
   }

   for(int i=0; i<m; i++){
       string input;
       cin>>input;
       if(!isdigit(input[0])){//문자라면
          cout<<pokemon[input]<<'\n';
       }else cout<<pokemonNum[stoi(input)]<<'\n';
   }
}