#include <iostream>
#include <sstream>
#include <vector>
#include "models/civilization/Civilization.h"

using namespace std;

void swap(vector<Civilization>& v, int x, int y) {
    Civilization temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

bool mustSwap(const Civilization& c1, const Civilization& c2){
    if(c1.getDistance() > c2.getDistance()) return true;
    if(c1.getDistance() < c2.getDistance()) return false;
    else{
        if(c1.getSize() > c2.getSize()) return true;
        else return false;
    }
}

void quicksort(vector<Civilization> vec, int L, int R) {
    int i, j, mid;
    Civilization piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid];

    while (i<R || j>L) {
        while (!mustSwap(vec[i], piv)) i++;
        while (mustSwap(vec[j], piv)) j--;
        if (i <= j) {
            swap(vec, i, j);
            i++;
            j--;
        }
        else {
            if (i < R)
                quicksort(vec, i, R);
            if (j > L)
                quicksort(vec, L, j);
            return;
        }
    }
}

int main() {
    int N = 0;
    cin >> N;
    vector<Civilization> civilizations;
    string input;
    while (scanf("%s", &input) != EOF) {
            istringstream iss(input);
            string name;
            int distance;
            int size;
            int i = 0;
            for(string s; iss >> s; i ++) {
                if(i ==0) name = s;
                else if(i == 1) distance = stoi(s);
                else if(i == 2) size = stoi(s);
            }
            civilizations.push_back(new Civilization(name, distance, size));
    }
    quicksort(civilizations, 0, civilizations.size());
    for(auto & civilization : civilizations){
        printf("%s %i %i", civilization.getName().c_str(), civilization.getDistance(), civilization.getSize());
    }

    return 0;
}

