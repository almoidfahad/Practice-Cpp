#include <iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<" Enter Any Number: ";
    cin>> n;
    
    for (row = 1; row <= n; row++){
        for(col=1; col <= n-row; col ++){
            cout<<" " ;
        }
        for (col= 1 ; col <= row; col ++){
            cout<<char(col+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}