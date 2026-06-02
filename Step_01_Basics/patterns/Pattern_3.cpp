// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 1
// 12
// 123
// 1234
// 12345

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Patter-3
// Source   : Striver A2Z — Step
// Approach : using nested loops
// Time     : O()
// Space    : O()
// Date     : 2026-06-02

void patt3(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,t;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n;
        patt3(n);
    }
    return 0;
}