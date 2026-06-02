#include<bits/stdc++.h>
using namespace std; // this allows to not use std everyehere . 

int main(){
    // std::cout << "Hey Prasham" << std::endl; // endl --> goes to the next line same as \n 
    // // instead of above endl we can also use \n :
    // std::cout << "Hey Prasham" << "\n";
    // std::cout << "Hey Prasham"<<"\n";

    // // now using namespace there is no need to use the 'std' everywhere .
    // cout << "YO GANG" << endl ;
    
    // int x ;
    // int y ;
    // // cin >> x >>y;
    // // cout << "Value of x: "<< x << " and y is: " << y << endl ;

    // // datat types - int , long , long long , double , float . 
    // // string , getline ,char  

    // string s1,s2 ;
    // cin >> s1 >> s2 ;

    // cout << s1 << " "<< s2 ;
    // string str ;
    // getline(cin, str); // this takes a full line a sentence as an input to the variable str .
    // cout << str << endl;

    // char ch1,ch2 ; 
    // ch1 = 'h'; // char --> declared as single quotes '' .
    // // can also be declared as string , but usually string is declared in " "
    // cin >> ch2 ;
    // cout << ch2 ;

    //if-else statements
    
    // int age ;
    // cin >> age ;

    // if(age < 18){
    //     cout << "Not eligible for the job" << endl ;
    // }
    // else if(age <= 54 ){
    //     cout << "Eligible for the job" << endl ;
    // }
    // else if(age <= 57) {
    //     cout << "Eligible for the job but retirement soon " << endl ;
    // }
    // else {
    //     cout << "retirment time" << endl ; 
    // }

    /*
    Multi 
    Line 
    Comment . 
    */

    // int marks ;
    // cin >> marks ;
    // if(marks < 25){
    //     cout << "F" << endl ;
    // }
    // else if(marks < 45){
    //     cout << "E" << endl ;
    // }
    // else if(marks < 50) {
    //     cout << "D" << endl;
    // }
    // else if(marks < 60){
    //     cout << "C" << endl ;
    // }
    // else if(marks <80){
    //     cout << "B" << endl ;
    // }
    // else {
    //     cout << "A" << endl ;
    // }

    // nested if statements are also okay , 

 // switch statements . 
    // int day ; 
    // cin >> day ;
    // switch(day){
    //     case 1 :
    //     cout << "Monday" << endl ; break ;
    //     case 2 :
    //     cout << "Tuesday" << endl ; break ;
    //     case 3 :
    //     cout << "Wednesday" << endl ;break ;
    //     case 4 :
    //     cout << "Thursday" << endl ;break ;
    //     case 5 :
    //     cout << "Friday" << endl ;break ;
    //     case 6 :
    //     cout << "Saturday" << endl ;break ;
    //     case 7 :
    //     cout << "Sunday" << endl ;break ;
    //     default :
    //     cout << "Invalid"<< endl; 


    // so the break -> besicallly don't go further ito any switch statements . 
    // }


    // Arrays ,
    // 1D - Array . 
    // int arr[5];
    // cin >> arr[0] >> arr[1]>> arr[2]>> arr[3] >>arr[4] ;

    // cout << arr[6]<<endl; // this will give a garbage value, as the index is out of range of the array defined .


    // // 2D - Array. 
    // int arr2[3][5] ; // arr[rows][columns]

    // cout << arr2[1][3]; // when nothing is defined in the array then garbage value is assigned . 
     
    // string s = "Prasham" ;
    // cout << s[3] ;
    // int len = s.size(); // string.size() --> this gives the length of the string . 
    // cout << len;
    // s[len-1] = 'p' ; 
    // cout << s ;
    // // note strings in C++ are mutable , changeable , 
    // // to change an index in the string , use single quotes. 


    // loops - for/while . 
    // for(int i = 0 ;i<=10;i=i+5){ // the scope of i is only in this for loop. 
    //     cout << i << endl ;
    // }

    // int i ; // inititallization 
    // while(i<=5){ // condition
    //     cout << "Prasham" << endl; 
    //     i++ ; // increment 
    // }


    // i = 2 ; 
    // do {
    //     cout << i << endl ;
    //     i++ ;
    // }while(i<=5) ;


    // Functions . 
    // void , return , parameterized , non-parameterized . 

    // void --> does not returns anything , no parameter passed . --> non-parameterized . 
    // parmeterized void -> takes some input parameter and run the fuction , still does not retunr anything . 

    // return functions --> should alwys be defined with the data type of the returning value , 

    // pass by value and pass by referenve functions . 
    // Pass by value --> scope is within the fucntion only , so chnages made inside a function , are only for that function . 
    // Pass by reference --> address of the variable is sent , so the scope is global the chnages are visible outside . 

    // void doSomething(string name){
        // cout << "Hey " << name << endl; 
    // }  

    // take 2 no.s and print their sum . 

// int summ(int n , int m){
//     int sum = 0 ;
//     sum = n + m;
//     return sum ;

// }

// Function names cannot be in-built function names . 

// arrays always are passed by ref inside a function . 

    return 0;
}