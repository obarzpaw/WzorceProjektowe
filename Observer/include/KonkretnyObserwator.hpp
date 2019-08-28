#ifndef KONKRETNY_OBSERWATOR_H
#define KONKRETNY_OBSERWATOR_H

#include <iostream>

#include "Podmiot.hpp"
#include "Oberwator.hpp"

class KonkretnyObserwator : public Obserwator {
public:
    KonkretnyObserwator(int id, Podmiot* p) {
        _id = id;
        _podmiot = p;
        _podmiot->dodajObserwator(this);
    }

    void Aktualizuj() { std::cout << "Oberwator numer: " << _id << std::endl; }

private:
    int _id = 0;
    Podmiot* _podmiot;
};

#endif //KONKRETNY_OBSERWATOR_H
