#include <iostream>
using namespace std;

int main(){

    int mark;
    
    cout<<"Enter Mark:";
    cin>>mark;

    if (mark > 100){
        cout<<"Invalid Mark";
    }
    else if(mark < 0){
        cout<<"Invalid Mark";
    }
    else if(mark>=80){
        cout<<"A+";
    } 
    else if (mark >= 70){
        cout<<"A";
    }
     else if (mark >=60){
        cout<<"B";
     }
     else if (mark >=50){
        cout<<"c";
     }
    else if (mark >=40){
        cout<<"D";
    }
    else if (mark >= 33){
        cout<<"Pass";
    }


    else{
        cout<<"Fail";
    }
    




}