#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    string s;
    cin >> s;

    unordered_set<char> st;
    for(char c : s) {
        st.insert(c);
    }
    if(st.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}