#include <string>

class Cifrado
{
public:

    Cifrado();

private:

protected:
    virtual void decrypt() = 0;

};

Cifrado::Cifrado() { }