// lexical order of permutation of a given string
// time complexity: O(n*n!) space complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
void solve_reccur_unique(string s,int pos){
    if(pos == s.size()){
        cout<<s<<endl;
        return;
    }
    unordered_set<char> us;
    for(int i=pos;i<s.size();i++){
        if(us.find(s[i])!=us.end()) 
            continue;
        us.insert(s[i]);
        swap(s[i],s[pos]);
        solve_reccur_unique(s,pos+1);
        swap(s[i],s[pos]);
    }
}
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
    solve("abcb",0);
    cout<<"****************************************"<<endl;
    solve_reccur_unique("abcb",0);
    return 0;   
}