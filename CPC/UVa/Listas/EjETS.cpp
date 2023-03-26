/* Extraordinarily Tired Students */
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;

int n, a[MAXN], b[MAXN], c[MAXN];

struct Student {
    int a, b, c, state;
};

list<Student> students;
int test_case = 0;

int main() {
    while(cin >> n) {
        students.clear();
        if (n == 0) break;
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i] >> c[i];
            students.push_back({a[i], b[i], c[i], c[i]});
        }
        int time = 0;
        while (true) {
            int awake = 0, asleep = 0;
            for (auto &student : students) {
                if (student.state < student.a) awake++;
                else asleep++;
            }
            if (awake * 2 > students.size()) {
                cout << "Case " << ++test_case << ": " << time << endl;
                break;
            }
            if (time > 10000) {
                cout << "Case " << ++test_case << ": -1" << endl;
                break;
            }
            for (auto &student : students) {
                student.state = (student.state + 1) % (student.a + student.b);
            }
            time++;
        }
    }
    return 0;
}
