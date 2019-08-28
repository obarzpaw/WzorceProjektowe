#ifndef PODMIOT_H
#define PODMIOT_H

#include "Oberwator.hpp"

class Podmiot {
public:
    virtual void dodajObserwator(Obserwator* o) = 0;

    virtual void usunObserwator(Obserwator* o) = 0;

    virtual void powiadomObserwatory() = 0;
};

#endif //PODMIOT_H
