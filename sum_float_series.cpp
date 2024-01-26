#include <iostream>
using namespace std;
int main(){
  float n, i, sum =0;
  
  cout<<"Enter N: ";
  cin>> n;
  
  for(i=1.5; i<=n; i++){
      sum = sum + i;
      
  }
  cout<<sum<<endl;
  
}