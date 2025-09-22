#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;

    unordered_map<long long,long long>mp;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        mp[x]++;
    }

    while(m--){
        long long total = 0;
        long long l,r;
        cin>>l>>r;

        for(int i=l;i<=r; i++){
            if(mp[i]==i) total++;
        }

        cout<<total<<endl;

    }

    return 0;
}