#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    set<char> word;

    string user_name;
    cin >> user_name;

    for(int i = 0; i < user_name.length(); i++) {
        word.insert(user_name[i]);
    }


    if (word.size()%2 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}