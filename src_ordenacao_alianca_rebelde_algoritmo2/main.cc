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

void buildHeap(vector<Civilization> &vec, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && !mustSwap(vec[l], vec[largest]))
        largest = l;

    if (r < n && !mustSwap(vec[r], vec[largest]))
        largest = r;

    if (largest != i) {
        swap(vec, i, largest);
        buildHeap(vec, n, largest);
    }
}


void heapSort(vector<Civilization> &vec, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        buildHeap(vec, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(vec, 0, i);
        buildHeap(vec, i, 0);
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
    heapSort(civilizations, MAX_LENGTH);
    for (auto &&civilization : civilizations) {
        cout << civilization.getName().c_str() << " " << civilization.getDistance() << " " << civilization.getSize()
             << "\n";
    }
    return 0;
}

