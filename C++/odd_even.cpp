#include<iostream>
using namespace std;

int main(){
  int number;

  cout << "Enter No. to check: ";
  cin >> number;


  if (number%2==0){
    cout << number << " is Even";
  }
  else {
    cout << number << " is Odd";
  }
}