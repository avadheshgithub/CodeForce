#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    if(n==0){
        cout<<"O-|-OOOO"<<endl;
        return 0;
    }
    else {
        while(n>0){
            int dig = n%10;
            if(dig==0) cout<<"O-|-OOOO"<<endl;
            else if(dig==1)cout<<"O-|O-OOO"<<endl;
            else if(dig==2)cout<<"O-|OO-OO"<<endl;
            else if(dig==3)cout<<"O-|OOO-O"<<endl;
            else if(dig==4)cout<<"O-|OOOO-"<<endl;
            else if(dig==5)cout<<"-O|-OOOO"<<endl;
            else if(dig==6)cout<<"-O|O-OOO"<<endl;
            else if(dig==7)cout<<"-O|OO-OO"<<endl;
            else if(dig==8)cout<<"-O|OOO-O"<<endl;
            else if(dig==9)cout<<"-O|OOOO-"<<endl;
            n/=10;
        }
    }
    return 0;
}