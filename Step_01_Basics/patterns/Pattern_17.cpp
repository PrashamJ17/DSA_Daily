// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05

void patt17(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            cout << "  ";
        }
        for(char k = 'A';k<'A'+i;k++){
            cout << k << " ";
        }
        for(char l = 63 + i;l >='A';l--){
            cout << l << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt17(n);
    }
    return 0;
}