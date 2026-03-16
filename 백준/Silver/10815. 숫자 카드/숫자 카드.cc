#include <iostream>
#include <set>
using namespace std;

int sanggeun=0;
int IsItCorrect=0;

set<int> sanggeunCards;
int YesOrNot[500001];

int main()
{
    cin>> sanggeun;
    
    for(int i=0; i<sanggeun; i++){
        int input;
        cin>> input; // set은 넣는 방식도 다르다!
        sanggeunCards.insert(input); // 배열이랑 set이랑 헷갈리지 않게 주의
    }
    
    cin>> IsItCorrect;
    
    for(int i=0; i<IsItCorrect; i++){
        cin>>YesOrNot[i];
    }
    
    for(int i=0; i<IsItCorrect; i++){ 
        if(sanggeunCards.find(YesOrNot[i]) != sanggeunCards.end())cout<<1<<' ';
        else cout<<0<<' ';   
    }
}