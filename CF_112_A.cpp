#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    string s,t;
    cin >> s >> t;
    int n = s.size();
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
    }
    if(s==t) cout<<0<<endl;
    else if(s>t) cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}