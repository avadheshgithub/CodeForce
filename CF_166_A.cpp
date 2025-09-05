#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<vector<int>>vec;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        vec.push_back({a,b});
    }

    sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) {
            return a[0] > b[0]; 
        }
        return a[1] < b[1]; 
    });

    map<pair<int, int>, int> mp;
    for(auto x:vec){
        mp[{x[0],x[1]}]++;
    }

   cout << mp[{vec[k-1][0], vec[k-1][1]}];

    return 0;
}