#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string p,q,r;
    cin>>p>>q>>r;

    unordered_map<char,int>mp;
    unordered_map<char,int>pm;

    for(auto ch:p){
        mp[ch]++;
    }
    for(auto ch:q){
        mp[ch]++;
    }

    for(auto x:r){
        pm[x]++;
    }

    if (mp == pm) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}