// lexical order of permutation of a given string

#include<bits/stdc++.h>
using namespace std;
string ans="";
void solve(string s,int pos){
    if(pos==s.size()){
        cout<<s<<endl;
        return;
    }
    for(int i=pos;i<s.size();i++){
        swap(s[i],s[pos]);
        solve(s,pos+1);
        swap(s[i],s[pos]);
    }
}
int main(){
    string s;
    // cin>>s;
    // cout<<solve(s,0);
    solve("abc",0);
    return 0;   
}