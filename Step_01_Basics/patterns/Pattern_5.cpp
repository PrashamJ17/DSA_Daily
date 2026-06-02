// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *****
// ****
// ***
// **
// *

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : pattern-5
// Source   : Striver A2Z — Step
// Approach : using nested loops
// Time     : O()
// Space    : O()
// Date     : 2026-06-02

void patt5(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j=j-1){ // why  j = n-i?? this is bcoz if j = n --> then every time it will print n stars , but we want 1 less no. of stars than prev row !!
            // either we use another variable and decrement it by 1 after every inner loop run . 
            // or else decrement j's value by i --> as i is increasing by 1 everytime , hence j's value will decrease by 1 after each outer loop iteration . 
            // thus saving space . 
            cout << "*" << " ";
        }
        cout << endl ;
    }
}
int main(){
    int t,n;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> n ;
        patt5(n);
    }
    return 0;
}


