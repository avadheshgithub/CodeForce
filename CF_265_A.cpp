#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    int ans = 1;
    int s1_idx = 0;
    int s2_idx = 0;
    while(s1_idx<s1.length() and s2_idx<s2.length()){
        if(s1[s1_idx]==s2[s2_idx]){
            ans++;
            s1_idx++;
            s2_idx++;
        }
        else{
            s2_idx++;
        }
    }

    cout<<ans<<endl;
    return 0;
}