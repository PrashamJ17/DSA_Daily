// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *****
// *   *
// *   *
// *   *
// *****

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : 
// Source   : Striver A2Z — Step 
// Approach : 
// Time     : O()
// Space    : O()
// Date     : 2026-06-05

void patt21(int n){
    for(int i = 1;i<=n;i++){
        if(i==1 or i==n){
            for(int j=1;j<=n;j++){
                cout << "* ";
            }
            cout << endl;
        }
        else {
            cout << "* ";
            for(int k = 1;k<=n-2;k++){
                cout << "  ";
            }
            cout << "* ";
            cout << endl ;
        }
    }
}

int main(){
    int n,t ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt21(n);
    }
    return 0;
}