#include <iostream>
using namespace std;
int main(){
    int n, row, col;
    cout<< " Enter Number: ";
    cin>>n;
    
    for (row = n ;row >=1; row--){
        for (col=1; col<=n-row; col++){
            cout<< "  ";
        }
        for(col =1; col<=2*row-1; col++){
            cout<< " "<<char(row+64);
        }
        cout<<endl;
    }
    return 0;
}