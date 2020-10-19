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
    if (c1.getDistance() > c2.getDistance()) return true;
    else if (c1.getDistance() < c2.getDistance()) return false;
    else {
        if (c1.getSize() > c2.getSize()) return true;
        else return false;
    }
}

void quicksort(vector<Civilization> &vec, int L, int R) {
    int i, j, mid;
    Civilization piv;
    i = L;
    j = R - 1;
    mid = L + (R - L) / 2;
    piv = vec[mid];

    while (i <= j) {
        while (mustSwap(vec[i], piv) && i < R) i++;
        while (mustSwap(piv, vec[j]) && j > L) j--;
        if (i <= j) {
            if (i != j) swap(vec, i, j);
            i++;
            j--;
        }
    }

    if (i < R) quicksort(vec, i, R);
    if (j > L) quicksort(vec, L, j + 1);
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
    quicksort(civilizations, 0, MAX_LENGTH);
    for (auto &&civilization : civilizations) {
        printf("%s %i %i\n", civilization.getName().c_str(), civilization.getDistance(), civilization.getSize());
    }

    return 0;
}

