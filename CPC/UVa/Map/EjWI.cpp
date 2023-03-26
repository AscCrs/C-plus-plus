#include <bits/stdc++.h>
using namespace std;

map<string, int> validWords;

bool isValid(string word) {
    for (int i = 1; i < word.length(); i++) {
        if (word[i] <= word[i - 1]) {
            return false;
        }
    }
    return true;
}

void generateWords(string word, int n) {
    if (n == 1) {
        validWords[word] = validWords.size() + 1;
    } else {
        char lastChar = word[word.length() - 1];
        for (char i = lastChar + 1; i <= 'z'; i++) {
            generateWords(word + i, n - 1);
        }
    }
}

int main() {
    string word;
    while (cin >> word) {
        if (word.length() <= 5 && isValid(word)) {
            if (validWords.count(word) == 0) {
                // Si la palabra no está en el mapa, generar todas las palabras válidas a partir de ella
                generateWords(word, 5 - word.length() + 1);
            }
            cout << validWords[word] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
