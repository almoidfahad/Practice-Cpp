#include <iostream>
using namespace std;
int main(){
  int num, temp, sum=0, rem;
  cout<<"Enter any number: ";
  cin>> num;
  
  temp = num;
  while(temp != 0){
    rem = temp % 10;
    sum = sum  * 10 + rem;
    temp = temp /10;
  }
  if(num == sum){
    cout<<"This is Palindrome Number" <<endl;
  }
  else{
    cout<<"This is Not a Palindrome Number" <<endl;
  }
}