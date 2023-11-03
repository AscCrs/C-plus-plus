#include <iostream>

using namespace std;

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int divisor = 1;
        int roundNumbers[10];
        int count = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                roundNumbers[count++] = digit * divisor;
            }
            n /= 10;
            divisor *= 10;
        }

        std::cout << count << std::endl;
        for (int i = count - 1; i >= 0; --i) {
            std::cout << roundNumbers[i];
            if (i > 0) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
