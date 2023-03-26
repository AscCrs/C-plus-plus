#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool x=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x){
            cout<<"HARD\n";
            return 0;
        }
    }
    cout<<"EASY\n";
}