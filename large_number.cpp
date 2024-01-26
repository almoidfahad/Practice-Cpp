#include <iostream>
using namespace std;

main (){
    int num1, num2, num3;

    // cout<<"Enter number a:";
    // cin>>num1;

    // cout<<"Enter the number b:";
    // cin>>num2;

    // cout<<"Enter the number c:";
    // cin>>num3;

    cout<<"Enter the 3 Number:";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Number 1 is Lager : " << num1 ;
    }
    else if (num2>num1 && num2> num3){
        cout<<"Number 2 is Lager : " << num2;
    }
    else{
        cout<<"Number 3 is Lager:" << num3;
    }


}