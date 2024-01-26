#include <iostream>
using namespace std;
int main(){
    int num, n, rem, sum = 0;
    cout<<"Enter any number: ";
    cin>> num;

    n = num;
    while (n != 0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    cout<<"Reverse Number is: "<<sum<<endl;

}