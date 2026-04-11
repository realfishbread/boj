#include <iostream>
#include <deque>
using namespace std;


deque<int> dq;
int n;
int input;


int main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin>>n;

  for(int i=0; i<n; i++){
      
      cin>>input;

      
    if(input == 1){
        int inputMore;
        cin>>inputMore;
        dq.push_front(inputMore);
    }else if(input ==2){
        int inputMore2;
        cin>>inputMore2;
        dq.push_back(inputMore2);
    }else if(input ==3){
        if(dq.empty() ==0){
           cout<<dq.front()<<'\n';
           dq.pop_front();
        }else cout<<-1<<'\n';
    }else if(input ==4){
        if(dq.empty()==0){
           cout<<dq.back()<<'\n';
           dq.pop_back();
        }else cout<<-1<<'\n';
    }else if(input ==5){
        cout<<dq.size()<<'\n';
    }else if(input ==6){
       if(dq.empty()==0){
          cout<<0<<'\n';
       }else cout<<1<<'\n';
       
    }else if(input ==7){
       if(dq.empty()==0){        
         cout<<dq.front()<<'\n';
       }
       else cout<<-1<<'\n';
       
    }else if(input==8){
       if(dq.empty() ==0) cout<<dq.back()<<'\n';
       else cout<<-1<<'\n';

    }

  }

}