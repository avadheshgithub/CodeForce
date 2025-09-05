#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int res = 0;
    int maxi = 0;

    while(n--){
        int x,y;
        cin>>x>>y;
        
        res -= x;
        res += y;

        int sum = res;
        maxi = max(maxi,sum);

    }
    cout<<maxi<<endl;
    return 0;
}