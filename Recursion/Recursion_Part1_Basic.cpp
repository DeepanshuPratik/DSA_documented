//Problem 1 : Print names 5 times using recursion

#include<bits/stdc++.h>
using namespace std;

void print_names(string p, int n){
    if(n==0)
        return;
    cout<<p<<endl;
    print_names(p,n-1);
}

void print_1toNbacktrack(int n){
    if(n==0)
        return;
    print_1toNbacktrack(n-1);
    cout<<n<<" "; 
}
void print_Nto1(int n){
    if(n==0)
        return;
    cout<<n<<" "; 
    print_Nto1(n-1);
}
void print_1toN(int i,int n){
    cout<<i<<" "; 
    if(i==n)
        return;
    print_1toN(i+1,n);
}
void print_Nto1backtrack(int i,int n){
    if(i==n+1)
        return;
    print_Nto1backtrack(i+1,n);
    cout<<i<<" "; 
}

int main(){
    string p;
    int n;
    cin>>n;
    //cin>>p;
    //print_names(p,n);
    //print_1toNbacktrack(n);
    //print_1toN(1,n);
    print_Nto1backtrack(1,n);
    return 0;
}