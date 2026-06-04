// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-04


void patt13(int n){
    int num = 1 ;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << num << " ";
            num++ ;
        }
        cout << endl ;
    }
}

int main(){
    int n,t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        patt13(n);
    }
    return 0;
}




