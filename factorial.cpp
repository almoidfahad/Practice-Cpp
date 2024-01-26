#include <iostream>
using namespace std;

int main(){
  int i, n, fact = 1;
  cout<<"Enter any Positive Number:";
  cin>>n;
  
  for( i=1; i<=n; i++){
    {
      fact = fact * i ; cout << endl;
    }
    cout<< fact;

  }
}