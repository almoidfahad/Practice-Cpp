#include<iostream>
using namespace std;

int main(){
    int num, i, count= 0;
    cout<<" Enter any Positive Number:";
    cin>>num;
    
    for(i=2; i<num; i++){
        if(num%i==0){
            count++;
            break;
        }
        cout<<i<<"%"<<num<<"= !="<<count <<endl;
    }
    if(count==0){
        cout<<"This number is a Prime:";
    }
    
    else{
        cout<<"This number is not a prime number:";
    }


}