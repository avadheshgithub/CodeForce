#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n;
    cin>>n;

    int val = 0;
    while(n--){
        string s = "";
        for(int i=0;i<3;i++){
            char x;
            cin>>x;
            s += x;
        }
        if((s=="++X") or (s=="X++")) val++;
        if((s=="--X") or (s=="X--")) val--;
        
    }
    cout<<val;
}