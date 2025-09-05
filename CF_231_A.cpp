#include<iostream>
using namespace std;

#include<bits/stdc++.h>

int main(){
    int n;
    cin>>n;
    
    int count = 0;
    while(n--){
        vector<int> v(3);
        for(int i=0; i<3; i++){
            cin>>v[i];
        }

        int sum = v[0] + v[1] + v[2];
        if(sum >= 2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}