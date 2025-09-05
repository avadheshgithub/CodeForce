#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    string s,t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if(s==t) cout<<"YES";
    else cout<<"NO";
    return 0;

}