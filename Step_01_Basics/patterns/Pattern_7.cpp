// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

//     *
//    ***
//   *****
//  *******
// *********

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-7
// Source   : Striver A2Z — Step 
// Approach : using 3 loops 
// Time     : O(n^2) (n^2 + n^2) --> O(n^2)
// Space    : O(5) --> i,j,k,n,t
// Date     : 2026-06-03

void patt7(int n){
    for(int i = 0;i<n;i++){
        for(int k=1;k<n-i;k++){
            cout << "  " ;
        }
        for(int j=0;j<((i*2)+1);j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t,n;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n;
        patt7(n);
    }

    return 0;
}