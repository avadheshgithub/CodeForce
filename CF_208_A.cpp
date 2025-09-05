#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    string res = "";

    for(int i=0;i<s.length();i+=1){
        string p = "";
        for(int j=i;j<i+3;j++){
            p += s[j];
        }
        if(p!="WUB"){
            res += s[i];
        }
        else{
            i+=2;
            if(res.size()>=1 && res[res.size()-1]!= ' ')res += " ";
        }
    }
    cout<<res;
}
