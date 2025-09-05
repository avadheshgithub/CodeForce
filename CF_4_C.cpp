#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_set<string>st;

    while(n--){
        string s;
        cin>>s;

        if(st.find(s)==st.end()){
            cout<<"OK"<<endl;
            st.insert(s);
        }
        else{
            cout<<s<<1<<endl;
        }
    }
    return 0;
}