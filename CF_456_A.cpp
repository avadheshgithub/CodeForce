#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int Dima = 0;
    int alex=0;

    vector<vector<int>>vec;
    while(n--){
        int p,q;
        cin>>p>>q;
        vec.push_back({p,q});
        // if(price<=p && quality<=q){
        //     Dima++;
        //     price = p;
        //     quality = q;
        // }
        // else{
        //     alex++;
        //     price = p;
        //     quality=q;
        // }
    }
    sort(vec.begin(),vec.end());
    for(int i=1;i<vec.size();i++){
        if(vec[i][0]>vec[i-1][0] && vec[i][1]>vec[i-1][1] ) Dima++;
        else{
            cout<<"Happy Alex";
            return 0;
        }
    }

    
    cout<<"Poor Alex";

    return 0;
}