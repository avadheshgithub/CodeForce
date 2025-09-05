#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;


    vector<int>pass(n);
    for(int i=0;i<n;i++){
        cin>>pass[i];
    }

    vector<int>fail(m);
    for(int i=0;i<m;i++){
        cin>>fail[i];
    }

    int v_max = *max_element(pass.begin(),pass.end());
    int v_min = *min_element(pass.begin(),pass.end());
    int min = *min_element(fail.begin(),fail.end());

    int v = max(v_max,2*v_min);
    if(v<min){
        cout<<v;
    }
    else{
        cout<<"-1";
    }

    return 0;


}