#include <iostream>
using namespace std;
int main(){
    int n,row, col;
    cout<<" Enter any Number:";
    cin>>n;
    
    for (row = 1; row <= n; row ++){
        for (col = 1; col <= n-row; col ++){
            cout<<"  ";
        }
        for (col = 1 ; col <= row ; col++){
            cout<<" "<< col;
        }
        for(col = row-1; col>= 1; col--){
            cout<<" "<<col;
        }
        cout<<endl;
    }
    for(row = n-1; row>=1; row--){
        for (col = 1; col<= n-row; col++){
            cout<<"  ";
        }
        for (col = 1; col <= row; col ++){
            cout<<" "<<col;
        }
        for(col = row-1; col >= 1; col--){
            cout<<" "<<col;
        }
        cout<<endl;
    }
    return 0;
}