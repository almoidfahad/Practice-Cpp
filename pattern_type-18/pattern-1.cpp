#include <iostream>
using namespace std;
int main(){
    int n, row, col, count=0;
    cout<<" Enter Number: ";
    cin>>n;
    
    for(row=1; row<= n; row++){
        for(col = 1; col <= n-row; col++){
            cout<<"  "; 
        }
        for (col = 1; col <= row; col ++){
            cout<<" "<<col;
        }
    
        // for (col = 1; col <= row-1; col ++){
        //     cout<<" "<<col;
        // }
        for(col = row-1; col>= 1; col--){
            cout<<" "<<col;
        }
        cout<<endl;
    }   
}