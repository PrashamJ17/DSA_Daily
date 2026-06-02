// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *
// **
// ***
// ****
// *****

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-2
// Source   : Striver A2Z — Step
// Approach : using nested loops
// Time     : O(n^2)
// Space    : O(4) - i,j,n,t
// Date     : 2026-06-02

void patt2(int n){
    int i , j ;
    for(i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    int n , t ;
    cin >> t ; // for the test cases

    for(int i=0;i<t;i++){
        cin >> n;
        patt2(n);
    }
    return 0;
}