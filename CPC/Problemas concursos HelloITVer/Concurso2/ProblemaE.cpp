#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    long long int n, m, u, v;
    
    do {
        cin >> n;
        vector<int> e(n);
        for (int i = 0; i<n; i++){
            cin >> e[i];
        }
        
        stack<int> st;
        int need = 1;
        bool poss = true;
        
        for(int i=0; i < n; i++){
            while(st.empty() != true && st.top() == need){
                need++;
                st.pop();
            }
             
            if(e[i] == need){
                need++;
            }
            else if(st.empty() != true && st.top() < e[i]){
                poss = false;
                break;
            }
            else{
                st.push(e[i]);
            }
        }
        
        if(n != 0){
            if(poss){
                cout << "yes" << endl;
            }
            else{
                cout << "no" <<endl;
            }
        }
        
    }while(n != 0);

    return 0;
}