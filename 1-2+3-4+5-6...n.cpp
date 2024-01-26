#include<iostream>
using namespace std;
int main(){
    int n, i, even=0, odd=0;
    cout<<"Enter the last term: ";
    cin>> n;
    
    for(i = 1; i<=n; i++){
        if(i%2==0){
            even = even+i;
        }
        else{
            odd = odd+i;
        }
    }
    cout<<"Sum = "<<(odd - even)<<endl;
}