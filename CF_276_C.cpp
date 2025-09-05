#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>freq(n,0);

    while(q--){
        int l,r;
        cin>>l>>r;
        for(int i=l-1;i<r;i++){
            freq[i]++;
        }
    }

    sort(freq.begin(),freq.end(),greater<>());
    sort(arr.begin(),arr.end(),greater<>());

    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=(freq[i]*arr[i]);
    }

    cout<<ans;
    return 0;

}