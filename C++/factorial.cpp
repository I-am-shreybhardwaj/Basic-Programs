#include<iostream>
using namespace std;

int main(){
  
  int num;  
  int Factorial = 1;


  cout<<"Enter a number: ";
  cin>>num;

  while(num>0){
    Factorial = Factorial * num;
    num= num-1;
  }

  cout << "Factorial is " << Factorial;
}