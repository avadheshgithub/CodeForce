#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    if(s[0]=='H' or s[0]=='Q' or s[0]=='9') cout<<"YES";
    //else if(s.size()==1 && s[0]=='+') cout<<"YES";
    else cout<<"NO";

    return 0;
}