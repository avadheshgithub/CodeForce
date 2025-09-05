#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int>left(n);
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(i==0) {
            int sum = 1;
            left[0]=1;
            int j = i;
            while(j+1<n && arr[j+1]<=arr[j] ){
                sum++;
                j++;
            }
            maxi = max(maxi,sum);

        }
        else {
            int sum = 1;
            if(arr[i-1]<=arr[i]) {
                sum+=left[i-1];
            }
            left[i]= sum;
            int j = i;
            while(j+1<n && arr[j+1]<=arr[j] ){
                sum++;
                j++;
            }
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi<<endl;
}