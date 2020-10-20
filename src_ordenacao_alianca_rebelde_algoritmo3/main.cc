#include <iostream>
#include <vector>
#include "models/civilization/Civilization.h"
#include "models/civilization/Civilization.cpp"

using namespace std;

bool mustSwap(const Civilization &c1, const Civilization &c2) {
    if (c1.getDistance() < c2.getDistance()) return true;
    else if (c1.getDistance() > c2.getDistance()) return false;
    else {
        if (c1.getSize() > c2.getSize()) return true;
        else return false;
    }
}

void merge(vector<Civilization> &vec, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<Civilization> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = vec[l + i];
    for (int j = 0; j < n2; j++) R[j] = vec[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (mustSwap(L[i], R[j])) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<Civilization> &vec, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(vec, l, m);
        mergeSort(vec, m + 1, r);
        merge(vec, l, m, r);
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
    int MAX_LENGTH = civilizations.size() - 1;
    mergeSort(civilizations, 0, MAX_LENGTH);
    for (auto &&civilization : civilizations) {
        cout << civilization.getName().c_str() << " " << civilization.getDistance() << " " << civilization.getSize()
             << "\n";
    }
    return 0;
}

