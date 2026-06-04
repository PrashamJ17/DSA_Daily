// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-04

void patt12(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << j << " " ;
        }
        for(int k = 1;k<=2*(n-i);k++){
            cout << "  ";
            
        }
        for(int j = i;j>=1;j--){
            cout << j << " " ;
        }
        cout << endl ;
    }
}

int main(){

    int n,t;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n;
        patt12(n);
    }

    return 0;
}