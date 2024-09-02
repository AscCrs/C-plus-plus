#include <iostream> 

using namespace std;

int main() {
    int n; 
    cin >> n;   
    bool x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x) {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
}