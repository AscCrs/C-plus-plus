#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int inf = 0, sup = 0, mitad = 0, dato = 0;
    bool band = false;

    dato = 4;

    // Binary Search Iterative Algorithm
    inf = 0;
    sup = 4;
    
    while (inf <= sup) {
        mitad = (inf + sup) / 2;
        if (arr[mitad] == dato) {
            band = true;
            break;
        } 
        if (arr[mitad] > dato) {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (arr[mitad] < dato) {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if (band == true) {
        cout << "Element found at index " << mitad << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}