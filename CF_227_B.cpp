#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int veshya = 0; // veshya left to right
    int petya = 0; // petya -> right to left

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        
        for(int i=0;i<n;i++){
            if(vec[i]==x){
                veshya += i+1;
                break;
            }
        }

        int count = 1;
        for(int i=n-1;i>=0;i--){
            if(vec[i]==x){
                petya += count;
                break;
            }
            else count++;
        }
    }

    cout<<veshya<<" "<<petya<<endl;
}


/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> pos(n + 1); 
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        pos[vec[i]] = i; 
    }

    long long vasya = 0, petya = 0; 
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        vasya += pos[x] + 1; 
        petya += n - pos[x];
    }

    cout << vasya << " " << petya << endl;
    return 0;
}
    
*/