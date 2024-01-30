#include <iostream>
using namespace std; 
int main(){
    int n,row, col;
    cout<<" Enter Any Number: ";
    cin>>n;
    
    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            if(row == 1 || row == n || col==1 || col==n ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
