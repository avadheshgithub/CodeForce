#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count1 = 0;
    int count0 = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='1') count1++;
        if(s[i]=='0') count0++;
    }

    int len = min(count1,count0);
    cout<<n-2*len<<endl;

    return 0;
}