// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// ABCDE
// ABCD
// ABC
// AB
// A

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05

void patt15(int n){
    for(int i = 1;i<=n;i++){
        for(char j = 'A';j<='A' + n-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt15(n);
    }
    return 0;
}