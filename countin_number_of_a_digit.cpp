#include <iostream>
using namespace std;
int main(){
    int num, n, count = 0;
    cout<< "Enter any number: ";
    cin>> num;

    n = num;
    while(n!=0){
        n = n/10;
        count ++;

    }
    cout<< "Counting Number of a digit : "<< count;
    
}