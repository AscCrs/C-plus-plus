#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int M, N, P, Q;
    cin >> M >> N >> P >> Q;

    if (M * N == P * Q) {
        cout << 0 << endl;
    } else if (M * N == Q * P) {
        cout << 0 << endl;
    } else {
        int area1 = M * N;
        int area2 = P * Q;

        if (area1 < area2) {
            swap(M, N); // Asegurarse de que M sea siempre mayor o igual a N
        }

        if ((M >= P && N >= Q) || (M >= Q && N >= P)) {
            int leftover1 = area1 - area2;
            int leftover2 = area1;

            while (leftover1 != leftover2) {
                if (leftover1 > leftover2) {
                    swap(leftover1, leftover2);
                }
                if (leftover2 - leftover1 >= P * Q) {
                    cout << area1 - area2 << endl;
                    return 0;
                }
                leftover2 = min(leftover2 - P * Q, M * N);
            }
        }

        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
