#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    string s;
    cin >> s;
    int n = s.size();

    bool flag = true;
    for(int i=1;i<n;i++){
        if((int)s[i]>=97 && (int)s[i]<=122){
            flag = false;
            break;
        }
    }

    if(flag==false) {
        cout<<s<<endl;
        return 0;
    } 
    else {
        for(int i=0;i<n;i++){
            if((int)s[i]>=65 && (int)s[i]<=90) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;   

}