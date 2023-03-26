#include <bits/stdc++.h>

using namespace std;

class nodo {
    public:
        int dato;
        nodo *next;

        nodo(int dato) {
            this->dato = dato;
            this->next = NULL;
        }
};

class lista {
    public:
        nodo *first;
        nodo *last;

        lista() {
            this->first = NULL;
            this->last = NULL;
        }

        void insertarNodo(int dato) {
            nodo* n = new nodo(dato);

            if(!this->first) {
                this->first = n;
            } else {
                this->last->next = n;
            }

            this->last = n;
        }

        void print() {
            nodo* temp = this->first;
            if(temp != NULL) {
                while(temp) {
                    cout << temp->dato << "\n";
                    temp = temp->next;
                }
            } else return;
        }
};

int main() {
    lista l;
    l.insertarNodo(0);
    l.insertarNodo(1);
    l.insertarNodo(2);

    l.print();

    return 0;
}