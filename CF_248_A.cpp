#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int leftOpen=0,leftClose=0,rightOpen=0,rightClose = 0;

    while(n--){
        int x,y;
        cin>>x>>y;

        if(x==0)leftClose++;
        else leftOpen++;

        if(y==0) rightClose++;
        else rightOpen++;
    }

    int x = min(leftClose,leftOpen);
    int y = min(rightClose,rightOpen);

    cout<<x+y;
    return 0;
}