#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_set<char>st;
    int a = 1000;
    while(a--){
        char ch;
        cin>>ch;

        if(ch=='{' or ch==',') continue;
        else if(ch=='}') break;
        else{
            st.insert(ch);
        }
    }
    cout<<st.size();
    return 0;
}