#include<bits/stdc++.h>
using namespace std;

int main(){
    int row=0;
    int col=0;
    int val=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>val;
            if(val==1){
                row = i;
                col = j;
            }
        }
    }
    cout<<abs(row-3)+abs(col-3);
    return 0;
}