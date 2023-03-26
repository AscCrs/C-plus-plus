#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, c = 0;
    cin >> n;
    int mat[n][3];  

    for (int i = 0; i < n; i++) {
        int ct = 0;
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j]; 
            if (mat[i][j] == 1) ct++;    
        }
        if (ct >= 2) c++;
    }     
    cout << c;

    return 0;
}