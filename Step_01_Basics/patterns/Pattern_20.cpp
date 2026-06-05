// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05

void patt19(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1 ; j <= i;j++){
            cout << "*" << " " ;
        }
        for(int k = 1 ; k <= 2*(n-i);k++){
            cout << "  ";
        }
        for(int j = 1 ; j <= i;j++){
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    for(int i = n-1;i>=1;i--){
        for(int j = 1 ; j <= i;j++){
            cout << "*" << " " ;
        }
        for(int k = 1 ; k <= 2*(n-i);k++){
            cout << "  ";
        }
        for(int j = 1 ; j <= i;j++){
            cout << "*" << " " ;
        }
        cout << endl ;
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt19(n);
    }
    return 0;
}