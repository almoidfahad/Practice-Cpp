#include <iostream>
using namespace std;


main (){
    int year;

    cout<<"Enter the Value is :";
    cin>>year;

    // if(year % 4 == 0 && year % 100 != 0){
    //     cout<<"This is Leap Year";
    // }

    // else if (year % 400 == 0){
    //     cout<<"This is Leap Year";
    // }

    // else {
    //     cout<<"This is Not Leap Year";
    // }



// ------I Try to another system---++++++++++++++++++=========================-------------------------------------------

    // if (year % 400 == 0){
    //     cout<<"This is Leap Year";
    // }
    
    // else if (year % 100 == 0){
    //     cout<<"This is Leap Year";
    // }


    // else if(year % 4 == 0){
    //     cout<<"This is Leap Year";
    // }

    // else {
    //     cout<<"This is Not Leap Year";
    // }

    // return 0;
    
// ------I Try to another system ---++++++++++++++++++=========================-------------------------------------------


    if ( (year % 4 == 0 && year % 100 != 0)|| year % 400 == 0){
        cout<<"This is Leap Year";
    }

    else {
        cout<<"This is Not Leap Year";
    }




    // Another google search it is working---------------


      // leap year if perfectly divisible by 400
//   if (year % 400 == 0) {
//     cout << year << " is a leap year.";
//   }
//   // not a leap year if divisible by 100
//   // but not divisible by 400
//   else if (year % 100 == 0) {
//     cout << year << " is not a leap year.";
//   }
//   // leap year if not divisible by 100
//   // but divisible by 4
//   else if (year % 4 == 0) {
//     cout << year << " is a leap year.";
//   }
//   // all other years are not leap years
//   else {
//     cout << year << " is not a leap year.";
//   }

//   return 0;
}