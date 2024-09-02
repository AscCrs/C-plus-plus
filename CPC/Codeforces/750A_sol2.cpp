#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int i = 1;

    for (i; time >= 5 * i && i <= n; i++) {
        time -= 5 * i;
    }
    
    cout << i - 1;
}