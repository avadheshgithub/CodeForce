#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    int n;
    cin>>n;

    int count = 0;

    while(n--){
        int x,y;
        cin>>x>>y;
        if(y>=2 && y-x>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}