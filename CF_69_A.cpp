#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    int n;
    cin >> n;

    int sum=0 ;
    for(int i=0;i<n*3;i++){
        int x;
        cin >> x;
        sum += x;
    }

    if(sum==0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}