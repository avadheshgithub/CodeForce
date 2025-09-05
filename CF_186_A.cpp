#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    
    int n = s1.length();
    int m = s2.length();

    if(n!=m){
        cout<<"NO";
        return 0;
    }

    vector<int>diff;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            diff.push_back(i);
        }
    }
    if(diff.size()==0){
        cout<<"YES";
        return 0;
    }
    if(diff.size()==2){
        int pos1 = diff[0];
        int pos2 = diff[1];

        if(s1[pos1]==s2[pos2] && s1[pos2]==s2[pos1]){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    
    return 0;
}