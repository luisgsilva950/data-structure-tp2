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


void merge(vector<Civilization> &vec, int low, int high, int mid) {
    int i, j, k;
    Civilization c[vec.size()];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (mustSwap(vec[i], vec[j])) {
            c[k] = vec[i];
            k++;
            i++;
        } else {
            c[k] = vec[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = vec[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = vec[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        vec[i] = c[i];
    }
}

void mergeSort(vector<Civilization> &vec, int L, int R) {
    if (L < R) {
        int m = (L + R) / 2;
        mergeSort(vec, L, m);
        mergeSort(vec, m + 1, R);
        merge(vec, L, R, m);
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

