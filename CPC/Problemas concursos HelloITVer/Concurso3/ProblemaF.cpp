#include <iostream>

using namespace std;

int t,n;
long long int suma,aux;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>t;
    while(t-->0){
        cin>>n;
        suma=0;
        for(int i=1;i<=n;i++){
            cin>>aux;
            suma+=aux;
        }
        if(suma%n==0){
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }
    }

    return 0;
}