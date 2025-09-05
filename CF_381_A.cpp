#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    long long sareja = 0;
    long long dima = 0;

    int i = 0;
    int j = n-1;
    bool saroja_turn = true;

    while(i<=j){
        if(saroja_turn){
            if(ans[i]<ans[j]){
                sareja += ans[j];
                j--;
            }
            else{ 
                sareja += ans[i];
                i++;
            }
        }
        else{
            if(ans[i]<ans[j]){
                dima += ans[j];
                j--;
            }
            else{ 
                dima += ans[i];
                i++;
            }
        }
        saroja_turn = !saroja_turn;
        
    }

    cout<<sareja<<" "<<dima;
    return 0;
}