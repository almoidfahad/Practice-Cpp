#include <iostream>

using namespace std;

int main(){
    char ch;

    cout<<"Enter Any Letter:";
    cin >> ch;

    ch = tolower(ch);

    if(ch=='a'|| ch=='e' || ch=='i'|| ch == 'o'|| ch=='u'){
        cout<<"Voule";
    }
    else{
        cout<<"Consonant";
    }

    

}