// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// A
// BB
// CCC
// DDDD
// EEEEE

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05\

void patt16(int n){
    char ch = 65;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<= i;j++){
            cout << ch << " ";
        }
        cout << endl;
        ch += 1 ;
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt16(n);
    }
    return 0;
}

