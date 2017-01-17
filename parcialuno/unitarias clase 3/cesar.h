#include <algorithm>
#include "cifrado.h"

class Cesar : public Cifrado 
{
public:

    Cesar();
    void decrypt();

private:

    std::string mensaje = "copiadodinamico";
    
    std::string inicio = "abcdefghijklmnopqrstuvwxyz";
};

Cesar::Cesar() { }

void Cesar::decrypt() {

    std::string reslt ="";
    int posicion=0;
    for (int i = 1; i <= 26; i++)
    {
        reslt = "";
        std::for_each(mensaje.begin(),mensaje.end(),[&](char m)
        {
            posicion = inicio.find(m);
            reslt += inicio[((posicion+i) % 26)];
        });
        
        std::cout << "despl: " << i << " output: " << reslt << std::endl;
    }
}