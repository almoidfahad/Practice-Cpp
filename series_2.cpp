#include <iostream>
using namespace std;
int main(){
    int n, a =1 , sum = 0;
    cout<<"Enter the last Number:", n;
    cin>> n;
    cout<<"1+2+3+4+...",n;
    
    while(a<=n){
        sum = sum + a;
        a = a+1;
    }
    cout<<sum<<endl;
}