//
// Created by luis on 19/10/2020.
//

#include "Civilization.h"

#include <utility>

const string &Civilization::getName() const {
    return name;
}

void Civilization::setName(const string &name) {
    Civilization::name = name;
}

int Civilization::getDistance() const {
    return distance;
}

void Civilization::setDistance(int distance) {
    Civilization::distance = distance;
}

int Civilization::getSize() const {
    return size;
}

void Civilization::setSize(int size) {
    Civilization::size = size;
}

Civilization::Civilization(string name, int distance, int size) : name(std::move(name)), distance(distance), size(size) {}

Civilization::Civilization(Civilization *pPlanet) : name(pPlanet->getName()), distance(pPlanet->getDistance()), size(pPlanet->getSize()){}

Civilization::Civilization() {}

Civilization::~Civilization() {

}
