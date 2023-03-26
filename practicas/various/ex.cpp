#include <iostream>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    list<int> ll; // Declaracion de la lista enlazada
    ll.push_front(0); // Se inserta un elemento al principio de la lista
    ll.push_back(1);
    ll.push_back(2); // Se insertan los elementos al final de la lista
    ll.push_back(3);
    ll.push_back(4);
    
    list<int>::iterator i;

    i = ll.begin();

    while(i != ll.end()) {
        cout << *i << " -> ";
        i++;
    }

    for(int num: ll) {
        cout << "[" << num << "] -> ";
    }

    return 0;
}