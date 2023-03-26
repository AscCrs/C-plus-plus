#include <iostream>
 
using namespace std;
 
int n;
string camino;
 
bool saltos(int mtd,string c){
    int rana=0;
    while(rana<c.size()){
        bool r=false;
        if(rana+mtd>=c.size())
            return true;
        for(int i=1;i<=mtd;i++){
            if(c[rana+i]=='R'){
                r=true;
                rana=rana+i;
                break;
            }
        }
        if(r==false)
            return false;
    }
    return true;
}
 
int bus_bin(int ini,int fin){
    if(ini==fin)
        return fin;
 
    int mtd=(ini+fin)/2;
    if(saltos(mtd,camino))
        return bus_bin(ini,mtd);
    else return bus_bin(mtd+1,fin);
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    cin>>n;
    while(n--){
        camino="";
        cin>>camino;
        camino=" "+camino;
        cout<<bus_bin(1,camino.size()+1)<<"\n";
    }
return 0;
}