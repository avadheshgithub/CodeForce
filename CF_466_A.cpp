#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    The single line contains four space-separated integers n, m, a, b (1 ≤ n, m, a, b ≤ 1000) — the number of rides Ann has planned, the number of rides covered by the m ride ticket, the price of a one ride ticket and the price of an m ride ticket.

    n - number of rides
    m - num of rides will ve coverd by special ticket
    a - price for normal ticket
    b - price of special ticket

    */
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int special_price = b/m;
    int ans = 0;

    if(special_price<a){
        int p = n/m;
        n = n-p*m;
        ans = p*b;
        if(n!=0){
            ans += min(n*a,b);
        }
    }
    else{
        ans = n*a;
    }

    cout<<ans<<endl;
    return 0;
}