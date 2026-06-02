
// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *****
// *****
// *****
// *****
// *****

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern - 1
// Source   : Striver A2Z — Step 
// Approach : using nested for loop
// Time     : O(n^2)
// Space    : O(4) --> n, i, j, t 
// Date     : 2026-06-02


void patt1(int n){
    int i , j ;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << "*" << " " ; // to print the columns for each row 
        }
        cout << endl; // we did this to go to the next line . 
    }
}
int main(){
    int n,t;
    cin >> t ; // this is for the no. of test cases . 
    for(int i=0;i<t;i++){
        cin >> n;
        patt1(n);
    }
    return 0;
}
