//                  ***Recursion***
// make a function and call that function and assume it will work for what 
// you are calling and fixed the base case.
//
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    return n*factorial(n-1);
}

//
//  fibbonacci series nth element 
//
int fibbonaci(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    return fibbonaci(n-1)+fibbonaci(n-2);
}
int fibbonaci_dp(int n){
    vector<int>p(n,0);
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    if(p[n]==0){
        p[n] = fibbonaci_dp(n-1)+fibbonaci_dp(n-2);
        return p[n]; 
    }
    else return p[n];
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fibbonaci(n);
    return 0;
}

