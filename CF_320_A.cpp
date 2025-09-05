#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_set<int>st;
    string s = to_string(n);
    for(auto x:s){
        st.insert(x);
    }

    for(auto x:st){
        if(x=='1' or x=='4'){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
       
    }
    cout<<"YES";
    return 0;
}