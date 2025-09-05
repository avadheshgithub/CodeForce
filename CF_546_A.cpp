#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    int res = 0;
    for(int i=1;i<=z;i++){
        res += x*i;
    }

    if(res<y) cout<<0<<endl;
    else cout<<res-y;
}