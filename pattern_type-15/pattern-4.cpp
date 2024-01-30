#include<iostream>
using namespace std;
int main(){
    int n, row ,col;
    cout<< " Enter any Number: ";
    cin>> n;
    
    for (row = 1 ; row <= n; row ++){
        for (col = 1; col <= n; col ++){
            if (row==1||row==n || col == 1|| col == n){
                cout<<char(col+64);
            }
            else{
                cout<<" ";
            }
        }
          cout<<endl;
    }
    return 0; 
}