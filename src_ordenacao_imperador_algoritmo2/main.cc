#include <iostream>
#include <vector>
#include "models/civilization/Civilization.h"
#include "models/civilization/Civilization.cpp"

using namespace std;

void swap(vector<Civilization> &v, int x, int y) {
    Civilization temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

bool mustSwap(const Civilization &c1, const Civilization &c2) {
    if (c1.getDistance() < c2.getDistance()) return true;
    else if (c1.getDistance() > c2.getDistance()) return false;
    else {
        if (c1.getSize() > c2.getSize()) return true;
        else return false;
    }
}

void selectionSort(vector<Civilization> &vec, int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (mustSwap(vec[j], vec[min_idx])) {
                min_idx = j;
            }
        }
        swap(vec, min_idx, i);
    }
}

int main() {
    int N = 0;
    cin >> N;
    vector<Civilization> civilizations(0);
    char input[100];
    int distance;
    int size;
    while (scanf("%s %i %i", &input, &distance, &size) != EOF) {
        civilizations.push_back(new Civilization(input, distance, size));
    }
    int MAX_LENGTH = civilizations.size();
    selectionSort(civilizations, MAX_LENGTH);
    for (auto &&civilization : civilizations) {
        cout << civilization.getName().c_str() << " " << civilization.getDistance() << " " << civilization.getSize()
             << "\n";
    }
    return 0;
}

