#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c;
    cin>>n>>c;

    vector<int>arr(n);
    //vector<pair<int,int>>ans;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0; 
    int idx=-1;
    for(int i=0;i<n;i++){
        int val=arr[i]/c;
        if(arr[i]%c!=0)val++;
        if(arr[i]>c && val>=ans){
            ans = val;
            idx=i+1;
        }
    }

    if(idx==-1)cout<<n;
    else  cout<<idx;
    
}