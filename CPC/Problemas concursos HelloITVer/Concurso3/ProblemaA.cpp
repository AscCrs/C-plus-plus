#include <iostream>

using namespace std;

int n,c,act,ant,cont,ans;

int main(){

    cin>>n>>c>>ant;
    cont=1;
    for(int i=2;i<=n;i++){
        cin>>act;
        if(act-ant>c){
          //  cout<<i<<"\n";
           // ans=max(ans,cont);
            cont=1;
        }
        else{
          cont++;
        }
        ant=act;
    }
    //ans=max(ans,cont);
    cout<<cont;
    return 0;
}