#include<iostream>
using namespace std;
int main(){
    int n, first = 2, second = 1, count = 0, lucas;
    cout<<"Enter any number : ";
    cin>>n;
 
    
    while(count <=  n){
          lucas = first + second;
          first = second;
          second = lucas;
          
          cout << lucas <<" ";
          count++;
    }
}