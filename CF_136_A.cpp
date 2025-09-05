#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  int x=1;
    for(auto i:v){
        mp[i]=x;
        x++;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }
   
}