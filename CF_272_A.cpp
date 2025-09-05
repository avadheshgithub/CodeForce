#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int frnd = n+1;

    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int fingers = accumulate(vec.begin(),vec.end(),0);
    int count = 0;

    for(int d=1;d<=5;d++){
        int total_fing = d+fingers;
        if(((total_fing-1)%frnd)+1 != 1) count++;
    }

    cout<<count<<endl;
    return 0;
}