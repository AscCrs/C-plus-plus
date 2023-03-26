#include <bits/stdc++.h>
#define EPSILON 1e-7
typedef long double ld;
using namespace std;
ld n,t;
ld a[1000][2];
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
bool test(ld c){
    ld total=0;
    for(int i=0;i<n;i++){
        if(a[i][1]+c<=0)return false;
        total+=a[i][0]/(a[i][1]+c);
    }
    return total<t;
}
int main() {
    fastio
    while(cin>>n>>t){
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        ld L=-1000,R=INT_MAX,m=0;
        while(fabs(R-L)>EPSILON){
            m=L+fabs(R-L)/2.0;
            if(test(m))R=m;
            else L=m;
        }
        cout<<setprecision(9)<<fixed<<L<<"\n";
    }
}