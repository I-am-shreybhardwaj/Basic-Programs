#include<iostream>
using namespace std;

int main(){
  int s_i;  
  int p;  
  int r;
  int t;

  cout<<"Enter the Priciple Amount: ";
  cin>> p;
  cout<<"Enter the Rate of Interest: ";
  cin>> r;
  cout<<"Enter the time: ";
  cin>> t;
  s_i = (p*r*t)/100;
  cout<<"The Simple Interest is: "<<s_i;
}