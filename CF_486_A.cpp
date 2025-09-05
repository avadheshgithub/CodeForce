#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    long long n;
    cin>> n;
    if(n%2!=0){
        n = n + 1; // Make n even
        cout<<"-"<<n/2;
        return 0;
    }
    else {
        cout<<n/2;
        return 0;
    }

    return 0;
}