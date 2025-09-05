#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int main(){
    long long n;
    cin >> n;

    string s = to_string(n);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '4' or s[i] == '7'){
            count++;
        }
    }
    string t = to_string(count);
    for(int i=0;i<t.length();i++){
        if(t[i] != '4' && t[i] != '7'){
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}