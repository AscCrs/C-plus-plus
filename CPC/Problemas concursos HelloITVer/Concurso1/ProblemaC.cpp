#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,grid[105][105];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>grid[i][j];
    int d1=1,m=n/2+1,ans=0;
    while(d1<m){
        ans+=grid[d1][d1]+grid[d1][n]+grid[n][d1]+grid[n][n];
        ans+=grid[d1][m]+grid[n][m]+grid[m][d1]+grid[m][n];
        d1++;
        n--;
    }
    ans+=grid[m][m];
    cout<<ans<<"\n";
}