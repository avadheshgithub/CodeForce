#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s;
    cin>>s;

    int countU=0;
    int countL=0;

    for(auto ch:s){
        if(isupper(ch)) countU++;
        else countL++;
    }

    if(countU>countL){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(),s.end(), s.begin(), ::tolower);
    }

    cout<<s;
    return 0;
}