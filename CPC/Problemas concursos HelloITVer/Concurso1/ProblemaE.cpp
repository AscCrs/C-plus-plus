#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    fastio
    int n,k,a[50];
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0)++ans;
    }
    cout<<ans<<"\n";
} 