/* Excercise 11849 CD UVa*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, jack_cd, jill_cd, c;
    while (cin >>n >> m && n + m != 0)
    {
        c = 0;
        set<int> jack_set;
        set<int> jill_set;
        for (int i = 0; i < n; i++) { 
            cin >> jack_cd;
            jack_set.insert(jack_cd);
        }
        for (int j = 0; j < m; j++) {
            cin >> jill_cd;
            jill_set.insert(jill_cd);
        }
        for(auto cd:jack_set){
            if(jill_set.count(cd)) c++;
        }
        cout << c << endl;

    }

    return 0;
}