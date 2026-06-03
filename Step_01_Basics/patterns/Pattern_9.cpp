// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

//     * 
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : patter-9
// Source   : Striver A2Z — Step 
// Approach : using nested loops - patt7 + patt8 combined . 
// Time     : O()
// Space    : O()
// Date     : 2026-06-03

void patt9(int n){
    for(int i = 0;i<n;i++){
        for(int k = 1;k<n-i;k++){
            cout << "  ";
        }
        for(int j = 0;j<((2*i) + 1);j++){
            cout << "* ";
        }
        cout << endl ;
    }
    for(int i = 0;i<n;i++){
        for(int k = 0;k<i;k++){
            cout << "  ";
        }
        for(int j = ((2*(n-i)) - 1);j>=1;j--){
            cout << "* ";
        }
        cout << endl ;
    }
}

void patt9_sol2(int n){
    for(int i = 0;i<2*n;i++){
        if(i<n){
            for(int k = 1;k<n-i;k++){
                cout << "  ";
            }
            for(int j = 0;j<((2*i) + 1);j++){
                cout << "* ";
            }
            cout << endl ;
        }
        else{
            for(int k = n;k<i;k++){
                cout << "  ";
            }
            for(int j = (2*((2*n)-i) - 1);j>=1;j--){
                cout << "* ";
            }
            cout << endl ;
        }
    }
}


int main(){
    int n,t;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n; 
        patt9(n);
        patt9_sol2(n);
    }
    return 0;
}