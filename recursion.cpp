//                  ***Recursion***
// make a function and call that function and assume it will work for what 
// you are calling and fixed the base case.
//
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

long long factorial(long long n){
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
//
// x^n 
//
int power_n(int x,int n){
    if(n==1)
        return x;
    return x*power_n(x,n-1);
}
int fibbonaci_dp(vector<int>&p,int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1; 
    if(p[n]!=-1)
        return p[n];

    p[n] = fibbonaci_dp(p,n-1)+fibbonaci_dp(p,n-2); 
    
    return p[n];
}

int main(){
    long long n;
    cin>>n;
    cout<<"Factorial of n: "<<factorial(n)<<endl;
    
    auto star = high_resolution_clock::now();
    
    cout<<"without dp: "<<fibbonaci(n)<<endl;
    
    auto sto = high_resolution_clock::now();
    auto duratio = duration_cast<microseconds>(sto - star);
    cout <<"Function without dp : "<<duratio.count() << endl;
    
    vector<int>p(n+2,-1);
    auto start = high_resolution_clock::now();
    
    cout<<"with dp: "<<fibbonaci_dp(p,n)<<endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"Function with dp : "<<duration.count() << endl;
    
    cout<<"Power of 2 using recurr : "<<power_n(2,n);
    return 0;
}

