#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool R=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')R=1;
        }
        if(!R)cout<<s.size()+1<<"\n";
        else{
            int lr=0,ans=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='R'){
                    ans=max(ans,i+1-lr);
                    lr=i+1;
                }
            }
            ans=max(ans,int(s.size())+1-lr);
            cout<<ans<<"\n";
        }
    }
}