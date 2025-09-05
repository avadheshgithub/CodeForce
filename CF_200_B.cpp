#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    double sum = 0;
    for(int i=0;i<n;i++){
        sum += (double)ans[i]/100;
    }
    //cout<<sum;
    cout<<fixed<<setprecision(12)<<(sum/n)*100;

}