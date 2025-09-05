#include<bits/stdc++.h>
using namespace std;

int main(){
    long long rup,bott,glass,cashback;
    cin>>rup>>bott>>glass>>cashback;

    long long total_bottle=0;
    if(rup>bott)total_bottle+=rup/bott;
    if(rup%bott>=bott or rup%bott>=glass) total_bottle+=1;

    long long ans = 0;
    while(rup>=glass){
        ans++;
        rup = rup-glass+cashback;
        
    }
    if(rup==bott) ans+=1;
    cout<<max(total_bottle,ans);
    return 0;
}