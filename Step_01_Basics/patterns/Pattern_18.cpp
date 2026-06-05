// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// E 
// D E 
// C D E 
// B C D E 
// A B C D E

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05

void patt18(int n){
    for(int i = n;i>=1;i--){
        for(char j = 'A' + i - 1;j<='A' + n - 1;j++){
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
        patt18(n);
    }
    return 0;
}