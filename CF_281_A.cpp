#include<iostream>
using namespace std;

#include<bits/stdc++.h>

int main(){
    string s;
    cin >> s;
    int n = s.size();
    s[0] = toupper(s[0]); 
    cout << s << endl;
    return 0;
}