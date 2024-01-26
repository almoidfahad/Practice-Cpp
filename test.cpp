#include <iostream>
using namespace std;

int main(){

    int mark;
    
    cout<<"Enter Mark:";
    cin>>mark;

    if(mark>32){
    
        if(mark>=80){
            cout<<"A+";
        } 
        else if (mark >= 70){
            cout<<"A" <<endl;
        }
        else if (mark >=60){
            cout<<"B" <<endl;
        }
        else if (mark >=50){
            cout<<"c"<<endl;
        }
        else if (mark >=40){
            cout<<"D"<<endl;
        }
        else if (mark >= 33){
            cout<<"Pass"<<endl;
        }

    }
    else{
        cout<<"Fail"<<endl;
    }

}  