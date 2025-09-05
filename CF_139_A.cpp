#include<bits/stdc++.h>
using namespace std;

int main(){

    int page;
    cin>>page;
    int sum = 0;

    vector<int>ans(7);
    for(int i=1;i<=7;i++){
        cin>>ans[i];
    }

    int i = 1;
    while(i<=7){
        sum += ans[i];
        if(sum>=page){
            cout<<i<<endl;
            return 0;
        }
        i++;
        if(i>7){
            i=1;
        }
    }
    return 0;
}