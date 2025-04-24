#include<iostream>
using namespace std;

int main(){
  
  int num;  
  bool isPrime = true;
  int i = 2;
  cout << "Enter the Number: ";
  cin>>num;

  while(i<num){
    if(num%i==0){
      isPrime = false;
      break;
    }
    i++;
  }
  if (isPrime) {
    cout << "Number is Prime";
  }
  else{
    cout << "Number is Not Prime";
  }
}