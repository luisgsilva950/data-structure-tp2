//
// Created by luis on 19/10/2020.
//
#include <string>


#ifndef ED_TP2_PLANET_H
#define ED_TP2_PLANET_H


using namespace std;
class Civilization {
private:
    string name;
    int distance;
    int size;
public:
    const string &getName() const;

    void setName(const string &name);

    int getDistance() const;

    void setDistance(int distance);

    int getSize() const;

    void setSize(int size);

    Civilization(string name, int distance, int size);

    Civilization(Civilization *pPlanet);

    virtual ~Civilization();

    Civilization();
};

#endif //ED_TP2_PLANET_H
