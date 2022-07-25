#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<string>b;

void subsequence(vector<int> p,vector<int> s,int i) {
    if(i==p.size()){
        a.push_back(s);
        return;
    }
    subsequence(p,s,i+1);
    s.push_back(p[i]);
    subsequence(p,s,i+1);
}
void subsequence(string p,string s,int i) {
    if(i==p.size()){
        b.push_back(s);
        return;
    }
    subsequence(p,s,i+1);
    s.push_back(p[i]);
    subsequence(p,s,i+1);
}
int main(){
    vector<int>p={1,2,3};
    subsequence(p,{},0);
    cout<<"Vector int: Subsequences are: "<<endl;
    for(auto i:a){
        for(auto j:i)
            cout<<j;
        cout<<" ";
    }
    cout<<endl<<"String : Subsequences are: "<<endl;
    subsequence("123","",0);
    for(auto i:b){
        cout<<i<<" ";
    }
    return 0;
}