#ifndef KONKRETNY_PODMIOT_H
#define KONKRETNY_PODMIOT_H

#include <list>
#include <iostream>

#include "Podmiot.hpp"
#include "Oberwator.hpp"

class KonkretnyPodmiot : public Podmiot {
public:
    void dodajObserwator(Obserwator* o) override { _obserwatory.push_back(o); }

    void usunObserwator(Obserwator* o) override { _obserwatory.remove(o); }

    void powiadomObserwatory() override { for(auto& obserwator: _obserwatory) { obserwator->Aktualizuj(); }; }

private:
    std::list<Obserwator*> _obserwatory;
};

#endif //KONKRETNY_PODMIOT_H
