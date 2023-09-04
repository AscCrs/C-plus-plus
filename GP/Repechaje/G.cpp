#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Kingdom {
    int id;
    int x;
    int y;
};

bool compareX(const Kingdom &a, const Kingdom &b) {
    return a.x < b.x;
}

bool compareY(const Kingdom &a, const Kingdom &b) {
    return a.y < b.y;
}

int main() {
    int N;
    cin >> N;

    vector<Kingdom> kingdoms(N);

    for (int i = 0; i < N; ++i) {
        kingdoms[i].id = i + 1;
        cin >> kingdoms[i].x >> kingdoms[i].y;
    }

    sort(kingdoms.begin(), kingdoms.end(), compareX);

    int maxX = kingdoms[N - 1].x;
    vector<int> maxXIndices;

    for (int i = N - 1; i >= 0; --i) {
        if (kingdoms[i].x == maxX) {
            maxXIndices.push_back(kingdoms[i].id);
        }
        else {
            break;
        }
    }

    sort(kingdoms.begin(), kingdoms.end(), compareY);

    int maxY = kingdoms[N - 1].y;
    vector<int> maxYIndices;

    for (int i = N - 1; i >= 0; --i) {
        if (kingdoms[i].y == maxY) {
            maxYIndices.push_back(kingdoms[i].id);
        }
        else {
            break;
        }
    }

    vector<int> result;

    for (int id : maxXIndices) {
        if (find(maxYIndices.begin(), maxYIndices.end(), id) != maxYIndices.end()) {
            result.push_back(id);
        }
    }

    sort(result.begin(), result.end());

    for (int id : result) {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
