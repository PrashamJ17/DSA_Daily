// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-11
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-04

void patt11(int n){
    for(int i = 1;i<=n;i++){
        if(i%2 == 0){
            for(int j = 0;j<i;j++){
                cout << j%2 << " ";
            }
            cout << endl ;
        }
        else {
            for(int j = 1;j<=i;j++){
                cout << j%2 << " " ;
            }
            cout << endl ;
        }
    }
}

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ; 
        patt11(n);
    }
    return 0;
}

