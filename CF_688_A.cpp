#include<iostream>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    bool flag = false;
    int curr = 0;
    int maxi = 0;

    while(d--){
        string s;
        cin>>s;
        bool has_zero = false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                has_zero=true;
                break;
            }

        }
        if(has_zero){
            curr++;
            maxi = max(maxi,curr);
        }else{
            curr = 0;
        }
    }

    maxi = max(maxi,curr);

    cout<<maxi;
    return 0;
}