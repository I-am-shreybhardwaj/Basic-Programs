#include<iostream>
using namespace std;

int main(){
  
  int ab,bc,ca;
  cin>>ab>>bc>>ca;

  if(ab+bc>ca && ab+ca>bc && bc+ca>ab){
    cout<<"This is a valid triangle";
  }
  else{
    cout<<"This is not a valid triangle";
  }
}