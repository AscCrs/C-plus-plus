/* Exercise 484 - The Department of Redundancy Department */
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    unordered_map<int, int> m;
    vector<int> v;

    int n;

    while (cin >> n) {  
        if(m[n] == 0) v.push_back(n);
        m[n]++;
    }

    for (int i = 0; i < v.size(); i++) cout << v[i] << " " << m.at(v[i]) << "\n";

    return 0;
}