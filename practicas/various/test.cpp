#include <iostream>
using namespace std;
bool t(int v[],int len, int k)
{
    for(int l=0;l<len-1;l++)
    {
        if(v[l+1]-v[l]==k)
        {
            k--;
        }
        else{
            if(abs(v[l+1]-v[l])>k)
            {
            return false;
            }
        }
        if(k==0)return false;
    }
    return true;
}

int main()
{
    int tc,nc=1; cin>>tc;
    while(tc-->0)
    {
        int n; cin>>n;
        n+=1;
        int vec[n];

        vec[0]=0;
        for(int i=1; i<n;i++)
        {
            cin>>vec[i];
        }
        int R = 100000000, L=1,m,o;
        o = sizeof(vec) / sizeof(int);
        R = vec[o-1];
        if(n-1==1)
        {
            cout<<"Case "<<nc<<": "<<vec[1]<<"\n";
            nc++;
        }
        else
        {
        while(L<R)
        {
            m=L+(R-L)/2;
            if(t(vec,o,m))
            {
                R = m;
            }
            else{
                L = m+1;
            }
        }
        cout<<"Case "<<nc<<": "<<R<<"\n";
        nc++;
        }
    }
}