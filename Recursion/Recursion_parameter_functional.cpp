// Functional and parametrized recursion call
#include<bits/stdc++.h>
using namespace std;

int find_sum_parametric(int i,int sum){
    if(i<=0)
        return sum;
    return find_sum_parametric(i-1,sum+i);
}
int find_sum_functional(int n){
    if(n<=0)
        return 0;
    return n+find_sum_functional(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<find_sum_parametric(n,0)<<endl;
    cout<<find_sum_functional(n)<<endl;
    return 0;
}