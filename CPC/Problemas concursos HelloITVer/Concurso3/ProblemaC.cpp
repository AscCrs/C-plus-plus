#include <iostream>
 
using namespace std;
 
int n,s,barr[200002],ini,fin;
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        barr[i]=barr[i-1]+x;
        if(barr[i]>=s && fin==0)
            fin=i;
    }
    int cont=0;
    for(int i=fin;i<=n;i++){
        while(barr[i]-barr[ini]>s){
            ini++;
        }
        if(barr[i]-barr[ini]==s) cont++;
    }
    cout<<cont;
 
    return 0;
}