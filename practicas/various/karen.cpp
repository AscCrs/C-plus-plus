#include <iostream>

using namespace std;

char c;
int n;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>c>>n;
    int c_int=c-96;

    if(n%2==1){
        if(c_int%2==1){
            cout<<"NEGRO";
        }
        else{
            cout<<"BLANCO";
        }
    }
    else{
        if(c_int%2==1){
            cout<<"BLANCO";
        }
        else{
            cout<<"NEGRO";
        }
    }

    return 0;
}