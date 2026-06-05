// Given an integer n. You need to recreate the pattern given below 
// for any value of N. Let's say for N = 5, the pattern should look 
// like as below:

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5

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
    for(int i = 1;i<=2*n-1;i++){
        cout << n << " ";
    }
    cout << endl;

    for(int i = 1;i<=n-1;i++){
        for(int j=n;j>n-i;j--){
            if(j<10){
                cout << j << "  " ;
            }
            else{
                cout << j << " " ;
            }
            
        }
        for(int k = 1;k<=2*n-1 - 2*i;k++){
            if((n-i)<10){
                cout << n-i << "  " ;
            }
            else{
                cout << n-i << " " ;
            }
            
        }
        for(int j=n-i+1;j<=n;j++){
            if(j<10){
                cout << j << "  " ;
            }
            else{
                cout << j << " " ;
            }
        }
        cout << endl ;
    }    

    for(int i = n-2;i>=1;i--){
        for(int j=n;j>n-i;j--){
            if(j<10){
                cout << j << "  " ;
            }
            else{
                cout << j << " " ;
            }
        }
        for(int k = 1;k<=2*n-1 - 2*i;k++){
            if((n-i)<10){
                cout << n-i << "  " ;
            }
            else{
                cout << n-i << " " ;
            }
        }
        for(int j=n-i+1;j<=n;j++){
            if(j<10){
                cout << j << "  " ;
            }
            else{
                cout << j << " " ;
            }
        }
        cout << endl ;
    }

    for(int i = 1;i<=2*n-1;i++){
        cout << n << " ";
    }
    cout << endl;
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