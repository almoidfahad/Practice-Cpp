#include <iostream>
using namespace std;
int main(){
    int n, row, col, count=1;
    cout<<"Enter Any Number :";
    cin>>n;
    
    for(row = 1; row <= n; row++){
        for(col =1; col<= row; col++){
            cout<< count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}