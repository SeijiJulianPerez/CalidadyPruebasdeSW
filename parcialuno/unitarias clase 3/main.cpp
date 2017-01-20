#pragma once
#include <iostream>
#include "Cesar.h"
#include "Vinegere.h"

int main() {

    Cesar *c = new Cesar();
    c->decrypt();
    Vinegere *v = new Vinegere();
    v->decrypt();

    return 0;
}