#include<vector>
#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}