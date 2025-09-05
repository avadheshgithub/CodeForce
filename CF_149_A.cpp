#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    vector<int>arr(12);
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }

    sort(arr.rbegin(),arr.rend());
    int sum = 0;
    int count = 0;
    for(int i=0;i<12;i++){
        if(sum>=k){
            break;
        }
        count++;
        sum += arr[i];
    }
    if(sum>=k){
        cout<<count;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}