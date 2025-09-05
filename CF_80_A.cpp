#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x,y;
    cin>>x>>y;

    int t = x+1;

    while(t<100){
        if(isPrime(t)){
            if(t==y){
                cout<<"YES";
                return 0;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        t++;
    }
    return 0;
}