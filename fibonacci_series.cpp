#include <iostream>
using namespace std;
int main(){
      int n, count =0, first =0, second=1, fibo,f;
      cout<< "Enter n: ";
      cin>> n;
      
      while(count<n){
          if(count<=0){
              fibo = count;
          }
          else{
              fibo = first + second;
              first = second;
              second = fibo;
          }
          cout<<fibo <<" + ";
          count++;
      }
}