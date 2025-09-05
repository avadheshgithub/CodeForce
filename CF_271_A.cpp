#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    string s = to_string(n);
    unordered_set<int>st;
    for(auto ch:s){
        st.insert(ch);
    }
    if(st.size()==s.size()) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    int m = n+1;

    while(m<=10000){
        if(check(m)){
            cout<<m;
            return 0;
        }
        m++;
    }
    return 0;


}