#include "include/KonkretnyPodmiot.hpp"
#include "include/KonkretnyObserwator.hpp"


int main()
{
    KonkretnyPodmiot podmiot;
    KonkretnyObserwator obserwator1(1, &podmiot);
    KonkretnyObserwator obserwator2(2, &podmiot);
    KonkretnyObserwator obserwator3(3, &podmiot);

    podmiot.powiadomObserwatory();
}
