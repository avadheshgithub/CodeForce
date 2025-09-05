#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;

        int rem = a%b;
        int count =0;
        if(rem!=0) count = b-rem;
        cout<<count<<endl;
    }
}