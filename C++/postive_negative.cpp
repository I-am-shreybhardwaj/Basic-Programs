#include<iostream>
using namespace std;

int main(){
  int number;

  cout << "Enter No. to check: ";
  cin >> number;


  if (number>0){
    cout << number << " is Postive";
  }
  else if (number < 0) {
    cout << number << " is Negative";
  }
  else{
    cout << "Number is " <<number;
  }
}