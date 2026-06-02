// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 12345
// 1234
// 123
// 12
// 1

// Print the pattern in the function given to you.

#include<bits/stdc++.h>
using namespace std;

// Problem  : Pattern-6
// Source   : Striver A2Z — Step
// Approach : using nested loops
// Time     : O()
// Space    : O()
// Date     : 2026-06-03

void patt6(int n){
    int i , j ;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){ // here j's cond --> n-i !! why not do it like patt5 --> j=n;j>=1;j--; ??
            // this is bcoz , here we have to print no.s 1 2 3 4 5 and so on , not the same symbol everytime . 
            // if we had done it like the previous eg then we will have to use another variable 
            // compromising on space complexity . 
            cout << j << " " ;
        }
        
        cout << endl;
    }

}

int main(){
    int n ,t ;
    cin >> t ;
    for(int i =0;i<t;i++){
        cin >> n ; 
        patt6(n);
    }
    return 0;
}