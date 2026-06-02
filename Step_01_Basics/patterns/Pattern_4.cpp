// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 1
// 22
// 333
// 4444
// 55555

// Print the pattern in the function given to you.


#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-5
// Source   : Striver A2Z — Step
// Approach : Using nested loops
// Time     : O()
// Space    : O()
// Date     : 2026-06-02

void patt5(int n){
    int i , j ;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << i + 1 << " ";
        }
        cout << endl ;
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        patt5(n);
    }
    return 0;
}