// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// *********
//  *******
//   *****
//    ***
//     *

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : pattern-8
// Source   : Striver A2Z — Step 
// Approach : using 3 nested loops
// Time     : O(n^2)
// Space    : O(5)
// Date     : 2026-06-03

void patt8(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout << "  ";
        }
        for(int j=((2*(n-i))-1);j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n,t;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n; 
        patt8(n);
    }
    return 0;
}