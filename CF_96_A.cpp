using namespace std;
#include<bits/stdc++.h>

int main(){
    string s;
    cin>>s;
    int n = s.length();
    

    for(int i=0;i<n;i++){
        int count = 1;
        while(i+1<n && s[i+1]==s[i]){
            count++;
            i++;
        }
        cout<<count<<" "<<i<<endl;
        if(count>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

}