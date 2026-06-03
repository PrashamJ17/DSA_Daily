// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-10
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-03

void patt10(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void patt10_sol2(int n){
    for(int i = 0;i<2*n - 1;i++){
        if(i<n){
            for(int j=0;j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for(int j = (2*n - i - 1);j>=1;j--){
                cout << "* ";
            }
            cout << endl ;
        }
    }   
}

int main(){
    int n,t;
    cin >> t ;
    for(int i = 0;i<t;i++){
        cin >> n;
        patt10(n);
        patt10_sol2(n);
    }
    return 0;
}