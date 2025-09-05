#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        if(s.size() <= 10){
            cout << s << endl;
            continue;
        }
        else{
            string res = "";
            res+= s[0]; 
            res+= to_string(s.size() - 2);
            res+= s[s.size() - 1];

            cout << res << endl;
        }
    }
}