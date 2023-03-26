/* Exercise 11136 Hoax or What */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, bill, case_num = 0;
    long long total_cost;
    set<int> bill_set;
    while (cin >> n && n != 0) {
        total_cost = 0;
        for (int i = 0; i < n; i++) {
            bill_set.clear();
            cin >> k;
            for (int j = 0; j < k; j++) {
                cin >> bill;
                bill_set.insert(bill);
            }
            auto it = bill_set.begin();
            total_cost += *bill_set.rbegin() - *it;
            bill_set.erase(bill_set.begin());
            bill_set.erase(--bill_set.end());
        }
        cout << total_cost << endl;
    }

    return 0;
}