#include <iostream>
#include "cesar.h"
#include "vinegere.h"

int main() {

    Cesar *c = new Cesar();
    c->decrypt();
    Vinegere *v = new Vinegere();
    v->decrypt();

    return 0;
}