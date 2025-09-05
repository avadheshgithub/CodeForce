#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int st,end;
    int mini = INT_MAX;
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1]) <mini){
            mini = abs(arr[i]-arr[i-1]);
            st = i;
            end = i+1;
        }
    }
    if(abs(arr[n-1]-arr[0])<mini){
        st = n;
        end = 1;
    }
    cout<<st<<" "<<end;
    return 0;


}