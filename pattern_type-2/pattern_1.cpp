#include <iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<<"Enter Any Number: ";
    cin>> n;
    
    for(row = n; row>=1; row--){
        for(col =1; col <= row; col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }
}