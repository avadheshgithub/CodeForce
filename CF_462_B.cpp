#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<long long>freq(26);
    for(auto c:s){
        freq[c-'A']++;
    }

    sort(freq.begin(),freq.end(),greater<long long>());

    long long coin = 0;
    long long left_Coin = k;

    for(int i=0;i<26 && left_Coin>0;i++){
        long long take = min(freq[i],left_Coin);
        coin += take*take;
        left_Coin -= take;
    }

    cout<<coin<<endl;
    return 0;

}