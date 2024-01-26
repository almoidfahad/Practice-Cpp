#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any Letter:";
    cin>>ch;
    
    // switch(ch){
    //     case 'a':
    //         cout<<"Vowel";
    //         break;
    //     case 'e':
    //         cout<<"Vowel";
    //         break;
    //     case 'i':
    //         cout<<"Vowel";
    //         break;
    //     case 'o':
    //         cout<<"Vowel";
    //         break;
    //     case 'u':
    //         cout<<"Vowel";
    //         break;
    //     default:
    //         cout<<"Consonant";

    // }

    // =============================================================================

    //                          Using Shortcut

    // =============================================================================

    ch = tolower(ch);

    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";

    }


}