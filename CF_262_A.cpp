#include<bits/stdc++.h>
using namespace std;

int luckeydigits(int n){
    int ans = 0;
    while(n>0){
        int dig = n%10;
        if(dig==4 or dig==7) ans++;
        n/=10;
    }
    return ans;
}

int main(){

    int n,k;
    cin>>n>>k;

    int ans = 0;

    while(n--){
        int val;
        cin>>val;
        if(luckeydigits(val)<=k) ans++;
    }

    cout<<ans<<endl;
    return 0;

}