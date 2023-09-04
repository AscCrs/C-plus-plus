#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

vector<int> multiplyPolynomials(const vector<int>& t, const vector<int>& p, int K) {
    int N = t.size() - 1;
    vector<int> q(N + 1);

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i + j <= N) {
                q[i + j] = (q[i + j] + (1LL * t[i] * p[j]) % MOD) % MOD;
            }
        }
    }

    vector<int> shiftedT(N + 1);
    vector<int> shiftedP(N + 1);

    for (int i = 0; i <= N; i++) {
        shiftedT[i] = (1LL * t[i] * K) % MOD;
        shiftedP[i] = (1LL * p[i] * K) % MOD;
    }

    for (int i = 0; i <= N; i++) {
        q[i] = (q[i] + shiftedT[i]) % MOD;
        if (i >= K) {
            q[i] = (q[i] + shiftedP[i - K]) % MOD;
        }
    }

    return q;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> t(N + 1);
    vector<int> p(N + 1);

    for (int i = 0; i <= N; i++) {
        cin >> t[i];
    }

    for (int i = 0; i <= N; i++) {
        cin >> p[i];
    }

    vector<int> q = multiplyPolynomials(t, p, K);

    for (int i = 0; i <= N; i++) {
        cout << q[i] << " ";
    }
    cout << endl;

    return 0;
}