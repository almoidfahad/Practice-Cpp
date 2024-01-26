#include <iostream>
using namespace std;
int main(){
     int number,num, sum =0, rem;
     cout<<"Enter any number: ";
     cin>>number;
     
     num = number;
     while( num != 0 ){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
     }
     cout<<"This is sum of digit"<<sum<<endl;

}