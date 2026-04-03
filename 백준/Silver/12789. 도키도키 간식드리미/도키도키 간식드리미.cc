#include <iostream>
#include <stack>
using namespace std;

int n;

stack<int> arr;
stack<int> otherSide;

stack<int> temp;

int main(){
  cin>>n;
  
  for(int i=0; i<n; i++){
       int input;
       cin>>input;
       temp.push(input);
  }
  
  for(int i=0; i<n; i++){
        arr.push(temp.top());
        temp.pop();
  }

  int min=1;
 
  while(!arr.empty() || !otherSide.empty()){
        if(!arr.empty() && arr.top()==min){
           arr.pop();
           min++;
        }else if(!otherSide.empty() && otherSide.top()==min){
           otherSide.pop();
           min++;
        }else if(!arr.empty()){
           otherSide.push(arr.top());
           arr.pop();
        }else {
           cout<<"Sad";
           return 0;
        }
    }
  
  cout<<"Nice";
}